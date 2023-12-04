import pytest
import rclpy
from rclpy.node import Node
from gesture_interface.msg import GestureTopic
from geometry_msgs.msg import Twist
from ges_pub_sub import ges_sub as GestureControlNode

class MockGestureControlNode(GestureControlNode):
    def __init__(self):
        super().__init__()
        self.published_twist = None

    def publish_twist(self):
        self.published_twist = Twist()
        self.published_twist.linear.x = self.target_linear_velocity
        self.published_twist.angular.z = self.target_angular_velocity

@pytest.fixture
def mock_node():
    rclpy.init()
    node = MockGestureControlNode()
    yield node
    node.destroy_node()
    rclpy.shutdown()

def test_gesture_callback_forward(mock_node):
    # Arranging simulated directions
    gesture_msg = GestureTopic()
    gesture_msg.linear_motion = 'forward'
    gesture_msg.angular_motion = 'stop'

    # Act (checks callbacks)
    mock_node.gesture_callback(gesture_msg)

    # Assert (compares results with our inputs)
    assert mock_node.published_twist.linear.x == 0.22
    assert mock_node.published_twist.angular.z == 0.0

def test_gesture_callback_backward(mock_node):
    # Arrange
    gesture_msg = GestureTopic()
    gesture_msg.linear_motion = 'backward'
    gesture_msg.angular_motion = 'stop'

    # Act
    mock_node.gesture_callback(gesture_msg)

    # Assert
    assert mock_node.published_twist.linear.x == -0.22
    assert mock_node.published_twist.angular.z == 0.0

def test_gesture_callback_stop(mock_node):
    gesture_msg = GestureTopic()
    gesture_msg.linear_motion = 'stop'
    gesture_msg.angular_motion = 'stop'

    # Act
    mock_node.gesture_callback(gesture_msg)

    # Assert
    assert mock_node.published_twist.linear.x == 0.0
    assert mock_node.published_twist.angular.z == 0.0
