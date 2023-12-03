import rclpy
from rclpy.node import Node
from gesture_interface.msg import GestureTopic
from geometry_msgs.msg import Twist

"""
This gesture subscriber was made by Jamshid Ganiev | 12200335.
It subscribes to the values published by gesture publisher (Akash's publisher node).
"""

class GestureControlNode(Node):
    def __init__(self):
        super().__init__('gesture_control_node')
        self.twist_publisher = self.create_publisher(
            Twist, 'cmd_vel', 10)
        self.twist_msg = Twist()

        # Initializes linear and angular velocities
        self.target_linear_velocity = 0.0
        self.target_angular_velocity = 0.0

    def gesture_callback(self, gesture_topic):
        linear_motion = gesture_topic.linear_motion
        angular_motion = gesture_topic.angular_motion

        # Here we are hanfling linear motion.
        if linear_motion == 'forward':
            self.target_linear_velocity = 0.22
        elif linear_motion == 'backward':
            self.target_linear_velocity = -0.22
        elif linear_motion == 'stop':
            self.target_linear_velocity = 0.0

        # and herer we are handling angular motion
        if angular_motion == 'left':
            self.target_angular_velocity = 1.82  # angular velocity for left turn
        elif angular_motion == 'right':
            self.target_angular_velocity = -1.82  # angular velocity for right turn
        elif angular_motion == 'stop':
            self.target_angular_velocity = 0.0

        # Debugging log
        self.get_logger().info(f"Linear: {self.target_linear_velocity}, Angular: {self.target_angular_velocity}")

        self.publish_twist()

    def publish_twist(self):
        # Publishes Twist message with the target velocities
        twist = Twist()
        twist.linear.x = self.target_linear_velocity
        twist.angular.z = self.target_angular_velocity
        self.twist_publisher.publish(twist)

def main(args=None):
    rclpy.init(args=args)
    gesture_control_node = GestureControlNode()
    gesture_control_node.create_subscription(
        GestureTopic, 'gesture_topic', gesture_control_node.gesture_callback, 10)
    rclpy.spin(gesture_control_node)
    gesture_control_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()