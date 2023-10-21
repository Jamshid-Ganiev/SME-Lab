import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from dynamic_fleet_manager.action import FleetManagement
import os
import json
import time

class FleetManagementServer(Node):

    def __init__(self):
        super().__init__('fleet_management_server')
        self._action_server = ActionServer(
            self,
            FleetManagement,
            'fleet_management',
            self.execute_callback
        )

        # Load project data from cities.json in the project_data folder
        self.project_data = self.load_project_data()

        # Initialize the number of available trucks
        self.available_trucks_10_tons = 30
        self.available_trucks_20_tons = 20

        # Initialize a dummy tracking link
        self.tracking_link = "https://12200335-delivery-tracking-link/mid-term-exam-jamshid-ganiev"

        # Set a flag to indicate if it's the first run
        self.first_run = True

    def load_project_data(self):
        # Adjust the file path to access cities.json in the project_data folder
        file_path = os.path.join(os.path.dirname(__file__), 'project_data', 'cities.json')
        with open(file_path, 'r') as file:
            return json.load(file)

    def execute_callback(self, goal_handle):
        self.get_logger().info('Received request for fleet management')
        self.get_logger().info('Executing goal...')

        # Use project data from cities.json in the project_data folder
        project_data = self.project_data
        city_names = list(project_data['cities'].keys())

        # Extract the custom data from the goal
        fleet_data = goal_handle.request.fleet_data

        if not fleet_data:
            error_msg = "Invalid request. Fleet data is missing."
            self.get_logger().error(error_msg)
            goal_handle.abort(result=None, text=error_msg)
            return

        data = fleet_data

        if len(data) != 3:
            error_msg = f"Invalid input. Each fleet data entry should contain three values: departure city, destination city, and weight."
            self.get_logger().error(error_msg)
            goal_handle.abort(reason=error_msg)
            return

        departure_city_name, destination_city_name, weight_str = data
        weight_in_tons = float(weight_str)

        if departure_city_name not in city_names or destination_city_name not in city_names:
            error_msg = f"Invalid input. Departure city '{departure_city_name}' or destination city '{destination_city_name}' not found."
            self.get_logger().error(error_msg)
            goal_handle.abort(reason=error_msg)
            return

        city_data = project_data['cities'][departure_city_name][destination_city_name]
        estimated_time_hours = city_data.get("time_hours", 0.0)
        total_distance_km = city_data.get("distance_km", 0.0)

        # Simulate the completion percentage and update the feedback message
        feedback_msg = FleetManagement.Feedback()
        for i in range(101):
            time.sleep(0.1)  # Simulated delay
            feedback_msg.completion_percentage = float(i)
            goal_handle.publish_feedback(feedback_msg)
            self.get_logger().info(f'Completion Percentage: {feedback_msg.completion_percentage}%')


        self.get_logger().info('----Trucks allocated and Routes determined----\n\n')

        goal_handle.succeed()

        # Calculate any result based on the input data
        result = FleetManagement.Result()
        result.vehicle_routes = [departure_city_name, destination_city_name, str(int(estimated_time_hours)), str(total_distance_km * 10), self.tracking_link]

        return result
        

def main(args=None):
    rclpy.init(args=args)
    server_node = FleetManagementServer()
    rclpy.spin(server_node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
