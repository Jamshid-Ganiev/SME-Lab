import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from dynamic_fleet_manager.action import FleetManagement
import click
import json

class FleetManagementClient(Node):

    def __init__(self):
        super().__init__('fleet_management_client')
        self._action_client = ActionClient(self, FleetManagement, 'fleet_management')
        self.results = []

    def send_goal(self, fleet_data):
        while not self._action_client.wait_for_server(timeout_sec=5.0):
            self.get_logger().info('Action server not available, waiting...')

        goal_msg = FleetManagement.Goal()
        goal_msg.fleet_data = fleet_data

        self.get_logger().info(f'Sending fleet management request...')

        self._send_goal_future = self._action_client.send_goal_async(goal_msg,  feedback_callback=self.feedback_callback)

        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        
        if not goal_handle.accepted:
            self.get_logger().info('Fleet management request rejected')
            return

        self.get_logger().info('Fleet management request accepted. Waiting for result...')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result()
        if result:
            self.results = result.result
        else:
            self.get_logger().error("Failed to get the result")
        self.get_logger().info('=========Goal Achieved!!!==========')
        rclpy.shutdown()


    def feedback_callback(self, feedback_msg):
        self.get_logger().info(f'Received Feedback: {feedback_msg.feedback.completion_percentage}% complete')

    def handle_result(self):
        if not self.results:
            click.echo("No results to display.")
        else:
            click.echo("##### FLEET MANAGEMENT RESULT: #####")
            result = self.results
            click.echo(f"Departure City: {result.vehicle_routes[0]}")
            click.echo(f"Destination City: {result.vehicle_routes[1]}")
            click.echo(f"Estimated Time: {result.vehicle_routes[2]} hours")
            click.echo(f"Estimated Price: ${result.vehicle_routes[3]}")
            click.echo(f"Delivery Tracking Link: {result.vehicle_routes[4]}")



def get_city_names():
    # Extract city names from the project data
    city_data = json.load(open('project_data/cities.json'))
    return list(city_data["cities"].keys())

def display_city_names(city_names):
    click.echo("Available Cities:")
    for i, city in enumerate(city_names, 1):
        click.echo(f"{i}. {city}")


def prompt_for_city(prompt_text):
    city_names = get_city_names()
    display_city_names(city_names)
    choice = click.prompt(prompt_text, type=click.IntRange(1, len(city_names)))
    return city_names[choice - 1]


def main():
    rclpy.init()

    fleet_data = []  # List to store fleet data

    departure_city = prompt_for_city("\nEnter the departure city (choose a number)")
    destination_city = prompt_for_city("\nEnter the destination city (choose a number)")
    weight_in_tons = click.prompt("\nEnter the weight of the delivery (tons)", type=click.IntRange(1, 100))

    # Populate fleet_data with user input
    fleet_data.append(departure_city)
    fleet_data.append(destination_city)
    fleet_data.append(str(weight_in_tons))

    client_node = FleetManagementClient()

    # Send the fleet_data to the server
    client_node.send_goal(fleet_data)

    # Wait for the results
    rclpy.spin(client_node)

    # Handle and print the results
    client_node.handle_result()

    #rclpy.shutdown()

if __name__ == '__main__':
    main()
