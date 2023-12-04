import cv2
from unittest.mock import patch, MagicMock
from ges_pub_sub.ges_pub import ges_pub

@patch("cv2.VideoCapture")
@patch("ges_pub_sub.ges_pub.get_gesture")
def test_gesture_callback(mock_get_gesture, mock_video_capture):
    node = ges_pub()

    # Creating a mock VideoCapture instance
    mock_capture = MagicMock(spec=cv2.VideoCapture)
    mock_capture.isOpened.return_value = True

    # Setting the VideoCapture instance in the node
    node.cap = mock_capture

    # Act
    node.gesture_callback()

    # Assert
    mock_get_gesture.assert_called_once()
    mock_capture.isOpened.assert_called_once()
    mock_capture.read.assert_called_once()

    # Adding assertions based on the expected behavior of our method
    assert node.gestture_msg.angular_motion == "stop"  
    assert node.gestture_msg.linear_motion == "forward" # expected direction results

    # Cleaning up any changes made during testing
    mock_get_gesture.assert_called_once()
    mock_capture.isOpened.assert_called_once()
    mock_capture.read.assert_called_once()


# Here is how we can run the codee:
# in the terminal: ----> pytest test_ges_pub.py
