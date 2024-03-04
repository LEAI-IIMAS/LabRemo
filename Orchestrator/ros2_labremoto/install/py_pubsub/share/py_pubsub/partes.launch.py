from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='py_pubsub',
            executable='auditor_transacciones',
            output='screen'),
            
        Node(
            package='py_pubsub',
            executable='admin_contratos',
            output='screen'),
        Node(
            package='py_pubsub',
            executable='admin_transacciones',
            output='screen'),
        Node(
            package='py_pubsub',
            executable='admin_log_salida',
            output='screen'),
       Node(
            package='py_pubsub',
            executable='admin_transacciones_entrada',
            output='screen'),
    ])
 