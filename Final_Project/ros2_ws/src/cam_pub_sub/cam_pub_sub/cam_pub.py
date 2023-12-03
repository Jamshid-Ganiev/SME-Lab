import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2


class VideoPublisher(Node):
    def __init__(self):
        super().__init__('video_publisher')
        self.publisher_ = self.create_publisher(Image, 'image_topic', 10)
        self.timer = self.create_timer(0.1, self.timer_callback)  # Adjust timer as needed
        self.br = CvBridge()
        # self.cam_ip='http://172.30.1.61:8000/?action=stream'
        # self.cap = cv2.VideoCapture(self.cam_ip)  # Initialize video capture

        self.vdo_adr='video/test.mp4'
        self.cap = cv2.VideoCapture(self.vdo_adr)  

    def timer_callback(self):
        ret, frame = self.cap.read()
        if ret:
            msg = self.br.cv2_to_imgmsg(frame, encoding='bgr8')
            self.publisher_.publish(msg)
        else:
            self.get_logger().info('No frame')

def main(args=None):
    rclpy.init(args=args)
    video_publisher = VideoPublisher()
    rclpy.spin(video_publisher)
    video_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
