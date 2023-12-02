import rclpy
from rclpy.node import Node
from sensor_msgs.msg import BatteryState
import math
import time

class BatteryStateChecker(Node):
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
        battery_percentage = math.floor(msg.percentage)
        charging_state = self.get_charging_state(battery_percentage)

        # Prints initial battery info only once
        if self.message_counter == 0:
            self.get_logger().info(f"Initial Battery Percentage: {battery_percentage}%")
            self.get_logger().info(f"Initial Charging State: {charging_state}\n")
            self.message_counter += 1
        else:
            self.get_logger().info(f"Battery Percentage: {battery_percentage}%")
            self.get_logger().info(f"Charging State: {charging_state}\n")

        self.last_battery_percentage = battery_percentage

    def get_charging_state(self, current_percentage):
        if self.last_battery_percentage is not None and current_percentage > self.last_battery_percentage:
            return "yes"
        else:
            return "no"

    def timer_callback(self):
        time.sleep(30)  # Waits for 30 seconds before printing the updated battery info

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
