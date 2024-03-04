import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from my_mas.msg import FileHexLoad
from my_mas.action import Cargahex


class ArduinoClient(Node):

    def __init__(self):
        super().__init__('Arduino_action_client')
        self._action_client = ActionClient(self, Cargahex, 'arduino_inf')

    def send_goal(self, path_hex):
        goal_msg = Cargahex.Goal()
        goal_msg.path_hex = path_hex

        self._action_client.wait_for_server()

        return self._action_client.send_goal_async(goal_msg)


class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.subscription = self.create_subscription(
            FileHexLoad,
            'archivos_hex',
            self.listener_callback,
            10)
        self.subscription  

    def listener_callback(self, msg):
        self.get_logger().info(f'{msg.path_hex}')
        action_client = ArduinoClient()
        future = action_client.send_goal(msg.path_hex)
        rclpy.spin_until_future_complete(action_client, future)

def main(args=None):
    rclpy.init(args=args)


    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()