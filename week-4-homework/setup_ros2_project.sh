#!/bin/bash

# Set your desired project and package names
PROJECT_NAME="my_ros2_project"
PACKAGE_NAME="my_package"

# Define the ROS 2 workspace directory
ROS2_WS_DIR="/home/jamshid/ros2_workspace"

# Create a ROS 2 workspace if it doesn't exist
mkdir -p $ROS2_WS_DIR/src

# Create a ROS 2 package
ros2 pkg create --build-type ament_cmake $PACKAGE_NAME

# Create a Python node
cat <<EOL > $ROS2_WS_DIR/src/$PACKAGE_NAME/$PACKAGE_NAME/my_node.py
#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

class MyNode(Node):
    def __init__(self):
        super().__init__('my_node')
        self.get_logger().info('Hello, ROS 2!')

def main(args=None):
    rclpy.init(args=args)
    node = MyNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
EOL

# Modify CMakeLists.txt to include the Python script
cat <<EOL >> $ROS2_WS_DIR/src/$PACKAGE_NAME/CMakeLists.txt

install(TARGETS
  my_node
  DESTINATION lib/\${PROJECT_NAME}
)

install(PROGRAMS
  scripts/my_node.py
  DESTINATION lib/\${PROJECT_NAME}
)
EOL

# Build the ROS 2 project
colcon build --packages-select $PACKAGE_NAME

# Source the workspace
source $ROS2_WS_DIR/install/setup.bash

echo "ROS 2 project setup complete!"

