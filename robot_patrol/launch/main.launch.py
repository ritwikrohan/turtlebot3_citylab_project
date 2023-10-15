from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='robot_patrol',
            executable='direction_server_node',
            name='direction_server_node',
            output='screen',
        ),

        Node(
            package='robot_patrol',
            executable='patrol_client_node',
            name='patrol_client_node',
            output='screen',
        ),
    ])