from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='robot_patrol',
            executable='direction_test_node',
            name='direction_test_node',
            output='screen',
        ),
    ])
