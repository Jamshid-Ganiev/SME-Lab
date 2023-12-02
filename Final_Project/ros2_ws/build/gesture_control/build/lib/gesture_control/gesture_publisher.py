import rclpy
from rclpy.node import Node
from std_msgs.msg import String

import cv2
from gesture_detector import get_gesture

class GesturePublisherNode(Node):
    def __init__(self):
        super().__init__('gesture_publisher_node')
        self.publisher_ = self.create_publisher(String, 'gesture_topic', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.gesture_callback)
        self.gestures = ['forward', 'backward', 'right', 'left', 'None']

    def gesture_callback(self):
        msg = String()
        cap = cv2.VideoCapture(0)

        if not cap.isOpened():
            print('Error: Can\'t load image from camera ')
        else:
            success, frame = cap.read()

            if not success:
                return

            frame = cv2.flip(frame, 1)
            img, num_finger, bbox = get_gesture(frame)

            if num_finger is None:
                msg.data = self.gestures[-1]
                self.publisher_.publish(msg)
                self.get_logger().info('Publishing Gesture Command: Robot to move : {}'.format("No Command Yet"))
            else:
                cv2.putText(img, self.gestures[len(num_finger)], (bbox[0] - 30, bbox[1] - 30),
                            cv2.FONT_HERSHEY_PLAIN, 2, (255, 0, 255), 2)

                msg.data = self.gestures[len(num_finger)]
                self.publisher_.publish(msg)
                self.get_logger().info('Publishing Gesture Command: Robot to move : {}'.format(msg.data))

            cv2.imshow('frame', img)

            if cv2.waitKey(100) & 0xFF == ord('q'):
                cap.release()
                cv2.destroyAllWindows()
                self.destroy_node()
                rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)
    gesture_publisher_node = GesturePublisherNode()
    rclpy.spin(gesture_publisher_node)
    gesture_publisher_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
