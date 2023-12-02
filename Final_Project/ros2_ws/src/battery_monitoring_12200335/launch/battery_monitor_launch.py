# battery_monitoring_12200335/launch/battery_monitor_launch.py
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='battery_monitoring_12200335',
            executable='battery_checker',
            name='battery_state_checker_node',
            output='screen',
            parameters=[{'topic': '/battery_state'}],  # Set your desired ROS topic here
        ),
    ])
