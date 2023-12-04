import launch
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='gesture_pub_sub',
            executable='gesture_sub_node',
            name='gesture_control_node',
            output='screen',
        ),
    ])

if __name__ == '__main__':
    launch_args = ['gesture_control_launch.py']
    launch.Launcher().main(launch_args)
