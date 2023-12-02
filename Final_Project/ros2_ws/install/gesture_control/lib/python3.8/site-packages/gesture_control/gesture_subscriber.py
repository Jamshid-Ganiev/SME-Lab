import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from geometry_msgs.msg import Twist

class GestureControlNode(Node):
    def __init__(self):
        super().__init__('gesture_control_node')
        self.twist_publisher = self.create_publisher(Twist, 'cmd_vel', 10)
        self.twist_msg = Twist()

        # Initialize variables for teleoperation
        self.target_linear_vel = 0.0
        self.target_angular_vel = 0.0
        self.control_linear_vel = 0.0
        self.control_angular_vel = 0.0

        self.gesture_subscription = self.create_subscription(String, 'gesture_topic', self.gesture_callback, 10)

    def gesture_callback(self, gesture):
        gesture = gesture.data
        if gesture == 'forward':
            self.twist_msg.linear.x = 1.0  # Move forward
            self.twist_msg.angular.z = 0.0
        elif gesture == 'backward':
            self.twist_msg.linear.x = -1.0  # Move backward
            self.twist_msg.angular.z = 0.0
        elif gesture == 'left':
            self.twist_msg.linear.x = 0.0
            self.twist_msg.angular.z = 1.0  # Rotate left
        elif gesture == 'right':
            self.twist_msg.linear.x = 0.0
            self.twist_msg.angular.z = -1.0  # Rotate right
        elif gesture == 'None':
            # Unknown gesture, stop the robot
            self.twist_msg.linear.x = 0.0
            self.twist_msg.angular.z = 0.0

        self.publish_twist()

    def publish_twist(self):
        # Publish the updated Twist message
        self.twist_publisher.publish(self.twist_msg)

def main(args=None):
    rclpy.init(args=args)
    gesture_control_node = GestureControlNode()
    rclpy.spin(gesture_control_node)
    gesture_control_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
