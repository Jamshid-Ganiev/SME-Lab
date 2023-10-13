#!/bin/bash

# Set your ROS 2 workspace path
WORKSPACE_PATH=~/ros2_ws

# Create the ROS 2 package for the bag recorder nodes
cd $WORKSPACE_PATH/src
ros2 pkg create --build-type ament_cmake --license Apache-2.0 bag_cpp --dependencies rclcpp rosbag2_cpp turtlesim

# Update package.xml with package description, maintainer email, and name
PACKAGE_XML="$WORKSPACE_PATH/src/bag_cpp/package.xml"
echo "<description>C++ bag reading tutorial</description>" > $PACKAGE_XML
echo "<maintainer email=\"you@email.com\">Your Name</maintainer>" >> $PACKAGE_XML
echo "<license>Apache-2.0</license>" >> $PACKAGE_XML

# Create a C++ node for reading and playing back data from a bag
cd $WORKSPACE_PATH/src/bag_cpp/src
cat <<EOL > simple_bag_reader.cpp
#include <chrono>
#include <functional>
#include <iostream>
#include <memory>
#include <string>
#include "rclcpp/rclcpp.hpp"
#include "rclcpp/serialization.hpp"
#include "rosbag2_cpp/reader.hpp"
#include "turtlesim/msg/pose.hpp"

using namespace std::chrono_literals;

class PlaybackNode : public rclcpp::Node
{
  public:
    PlaybackNode(const std::string & bag_filename)
    : Node("playback_node")
    {
      publisher_ = this->create_publisher<turtlesim::msg::Pose>("/turtle1/pose", 10);
      timer_ = this->create_wall_timer(
          100ms, std::bind(&PlaybackNode::timer_callback, this));
      reader_.open(bag_filename);
    }

  private:
    void timer_callback()
    {
      while (reader_.has_next()) {
        rosbag2_storage::SerializedBagMessageSharedPtr msg = reader_.read_next();

        if (msg->topic_name != "/turtle1/pose") {
          continue;
        }

        rclcpp::SerializedMessage serialized_msg(*msg->serialized_data);
        turtlesim::msg::Pose::SharedPtr ros_msg = std::make_shared<turtlesim::msg::Pose>();
        serialization_.deserialize_message(&serialized_msg, ros_msg.get());
        publisher_->publish(*ros_msg);
        std::cout << '(' << ros_msg->x << ", " << ros_msg->y << ")\n";
        break;
      }
    }

    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<turtlesim::msg::Pose>::SharedPtr publisher_;
    rclcpp::Serialization<turtlesim::msg::Pose> serialization_;
    rosbag2_cpp::Reader reader_;
};

int main(int argc, char ** argv)
{
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <bag>" << std::endl;
    return 1;
  }

  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<PlaybackNode>(argv[1]));
  rclcpp::shutdown();
  return 0;
}
EOL

# Build the package
cd $WORKSPACE_PATH
colcon build --packages-select bag_cpp

# Source the workspace setup file
source $WORKSPACE_PATH/install/setup.bash

# Run the bag reader node, replace /path/to/your.bag with the actual path
ros2 run bag_cpp simple_bag_reader /path/to/your.bag
