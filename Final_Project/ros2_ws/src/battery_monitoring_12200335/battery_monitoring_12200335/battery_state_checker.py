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

    def battery_state_callback(self, msg):
        # Extracting relevant information from the BatteryState message
        battery_percentage = math.floor(msg.percentage)
        charging_state = "yes" if msg.power_supply_status == 1 else "no"

        # Printing battery percentage and charging state
        self.get_logger().info(f"Battery Percentage: {battery_percentage}%")
        self.get_logger().info(f"Charging State: {charging_state}\n")

        # Store the last received battery state message for later use in the timer callback
        self.last_battery_msg = msg

    def timer_callback(self):
        # Print updated battery info
        self.get_logger().info("Updated battery info:")

        # Check if there is a stored battery message from the last callback
        if hasattr(self, 'last_battery_msg'):
            battery_percentage = math.floor(self.last_battery_msg.percentage)
            charging_state = "yes" if self.last_battery_msg.power_supply_status == 1 else "no"
            
            self.get_logger().info(f"1- Battery Percentage: {battery_percentage}%")
            self.get_logger().info(f"2- Charging State: {charging_state}\n")
        else:
            self.get_logger().info("No recent battery state information.")

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
