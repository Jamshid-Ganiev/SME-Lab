#!/bin/bash
# Script: turtlesimm.sh
# Description: This script launches TurtleSim in ROS 2, sets the background color of the TurtleSim window,
# and makes the turtle draw a colorful spiral pattern by repeatedly changing its pen color, moving it forward, and turning it.
# It stops the turtle when the spiral is complete.

# Source the ROS 2 environment setup script
source /opt/ros/humble/setup.bash  # Replace 'humble' with your ROS 2 distribution

# Start the TurtleSim
ros2 run turtlesim turtlesim_node &

# Give it some time to start
sleep 2

# Set the background color
ros2 topic pub -1 /reset std_msgs/msg/Empty

# Draw a colorful spiral pattern
for i in {1..360}
do
    # Change the pen color for each iteration
    case $((i % 4)) in
        0)
            color=0,0,255
            ;;
        1)
            color=0,255,0
            ;;
        2)
            color=255,0,0
            ;;
        3)
            color=255,255,0
            ;;
    esac

    # Move the turtle forward and turn
    ros2 topic pub /turtle1/cmd_vel geometry_msgs/msg/Twist "linear:
      x: 2.0
      y: 0.0
      z: 0.0
    angular:
      x: 0.0
      y: 0.0
      z: 1.0"

    # Change the pen color
    ros2 service call /turtle1/set_pen turtlesim/srv/SetPen "{r: $color[0], g: $color[1], b: $color[2], width: 2, off: 0}"

    # Sleep briefly to see the pattern forming
    sleep 0.1
done

# Stop the TurtleSim
killall turtlesim_node

# Exit the script
exit 0

