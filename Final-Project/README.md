# Team D | Jamshidjon Ganiev (12200335)

[GitHub Link to Team Project Repository ](https://github.com/Jamshid-Ganiev/Team-D_group_project)

## SLAM and Navigation
### Snapshots

1)![Screenshot from 2023-12-02 18-41-19](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/9373b7fd-71e8-48db-969d-960f86b44c80)
2) ![Screenshot from 2023-12-02 18-45-06](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/6178e5de-5b04-401a-b7da-2573b414afe5)
3) ![Screenshot from 2023-12-02 18-46-18](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/794e4693-851c-4db1-9ddd-1b166512ee1b)
4) ![Screenshot from 2023-12-02 18-47-27](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/3a145066-7604-450c-b532-93e5c57b028f)
5)  ![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/bc514a29-b0aa-404a-9ae8-e96ff4f49ff8)

## Battery Monitoring
### Project Structure:
![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/a44d40b9-7757-4310-8142-ffa7fb8561eb)

- battery_state_checker:

```python
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import BatteryState
import math
import click

"""
    This function was made by Jamshidjon Ganiev | 12200335
"""

class BatteryStateChecker(Node):
    def __init__(self, topic_name):
        super().__init__('battery_state_checker')
        self.subscription = self.create_subscription(
            BatteryState,
            topic_name,
            self.battery_state_callback,
            10)
        self.timer = self.create_timer(30.0, self.timer_callback)
        self.initial_print_done = False
        self.last_battery_percentage = None

    def battery_state_callback(self, msg):
        # Extracting relevant information from the BatteryState message
        battery_percentage = math.floor(msg.percentage)
        charging_state = self.get_charging_state(battery_percentage)

        # Prints initial battery information only once
        if not self.initial_print_done:
            self.get_logger().info(f"Initial Battery Percentage: {battery_percentage}%")
            self.get_logger().info(f"Initial Charging State: {charging_state}\n")
            self.initial_print_done = True

        self.last_battery_percentage = battery_percentage

    def get_charging_state(self, current_percentage):
        # Compares with the previous battery percentage to determine charging state
        if (self.last_battery_percentage is not None) and (current_percentage > (self.last_battery_percentage - 1)):
            return "yes"
        else:
            return "no"

    def timer_callback(self):
        # Prints updated battery info every 30 seconds
        if self.initial_print_done and hasattr(self, 'last_battery_percentage'):
            battery_percentage = self.last_battery_percentage
            charging_state = self.get_charging_state(battery_percentage)

            self.get_logger().info("Updated battery info:")
            self.get_logger().info(f"1- Battery Percentage: {battery_percentage}%")
            self.get_logger().info(f"2- Charging State: {charging_state}\n")

            # Resetting the timer for the next update
            self.timer.reset()

@click.command()
@click.option('--topic', default='/battery_state', help='ROS topic name for battery state')
def main(topic):
    rclpy.init()

    try:
        battery_state_checker = BatteryStateChecker(topic)
        rclpy.spin(battery_state_checker)
    except KeyboardInterrupt:
        pass
    finally:
        battery_state_checker.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

```

- launch file:
  
  ![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/a00be90a-aff9-4050-abb5-72b20bd1ba7d)

- click library for CLI:

  ![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/1b07534f-baa3-4f74-891a-1cd36c14553f)

- py tests:

  ![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/cc260012-2c00-4e4b-ada4-17feeb3720d9)

- ros bag file:

 ![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/15aac21a-d71e-48e6-8198-ab1f0573e961)


## Gesture Control Subscirber Node
### Project Structure:
![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/e9788e64-41c5-408e-866d-ac4b9ab657b0)

- launch file:

![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/e83d2ccd-c889-418c-a3bb-0d3013635b3b)


- ros bag files:

  ![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/6c003b6a-6fe7-4193-a6a5-cade8052549c)

- py tests:

  ![image](https://github.com/Jamshid-Ganiev/SME-Lab/assets/84252587/b99ae4e3-bb92-45af-8704-f31f51e5ccad)
