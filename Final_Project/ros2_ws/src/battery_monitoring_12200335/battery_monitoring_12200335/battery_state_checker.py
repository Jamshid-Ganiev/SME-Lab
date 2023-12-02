import rclpy
from rclpy.node import Node
from sensor_msgs.msg import BatteryState
import math

class BatteryStateChecker(Node):
    """
    This function is made by Jamshidjon Ganiev | 12200335
    """

    def __init__(self):
        super().__init__('battery_state_checker')
        self.subscription = self.create_subscription(
            BatteryState,
            '/battery_state',
            self.battery_state_callback,
            10)
        self.timer = self.create_timer(30.0, self.timer_callback)
        self.message_counter = 0
        self.last_battery_percentage = None

    def battery_state_callback(self, msg):
        # Extracting relevant information from the BatteryState message
        battery_percentage = math.floor(msg.percentage)
        charging_state = self.get_charging_state(battery_percentage)

        # Printing battery percentage and charging state
        self.get_logger().info(f"Battery Percentage: {battery_percentage}%")
        self.get_logger().info(f"Charging State: {charging_state}\n")

        # Storeing the current battery percentage for later use in the timer callback
        self.last_battery_percentage = battery_percentage
        self.message_counter += 1

        # Printing initial battery info and reset the timer only once
        if self.message_counter == 1:
            self.timer.reset()

    def get_charging_state(self, current_percentage):
        # Comparing with the previous battery percentage to determine charging state
        if self.last_battery_percentage is not None and current_percentage > self.last_battery_percentage:
            return "yes"
        else:
            return "no"

    def timer_callback(self):
        # Printing updated battery info every 30 seconds
        if hasattr(self, 'last_battery_percentage'):
            battery_percentage = self.last_battery_percentage
            charging_state = self.get_charging_state(battery_percentage)
            
            self.get_logger().info("Updated battery info:")
            self.get_logger().info(f"1- Battery Percentage: {battery_percentage}%")
            self.get_logger().info(f"2- Charging State: {charging_state}\n")

def main(args=None):
    rclpy.init(args=args)

    battery_state_checker = BatteryStateChecker()

    try:
        rclpy.spin(battery_state_checker)
    except KeyboardInterrupt:
        pass

    battery_state_checker.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
