from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='py_pubsub',
            executable='arduino_infrastructure',
            output='screen'),
        Node(
            package='py_pubsub',
            executable='arduino_inf_cliente',
            output='screen')
    ])