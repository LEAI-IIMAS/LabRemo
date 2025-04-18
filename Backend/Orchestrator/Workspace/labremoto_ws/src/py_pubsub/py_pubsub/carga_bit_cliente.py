import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from my_mas.action import CargaBit
from my_mas.msg import FileBitLoad,Operacion,Auditor

from datetime import datetime



class CargaBitClient(Node):

    def __init__(self):
        super().__init__('carga_bit_client')
        self._action_client = ActionClient(self, CargaBit, 'carga_bit')
        self.subscription = self.create_subscription(
            FileBitLoad,'top_archivos_bit',self.listener_callback,10)
        self.subscription 
        self.msg_inicio_node()

        self.publisherauditor_ = self.create_publisher(Auditor, 'top_auditor_transacciones', 10)


    def msg_inicio_node(self):
        """
        Funcion para publicar el inicio del nodo.
        
        Args:
            none

        Returns:
            none
        """
        msg_operacion = Operacion()
        msg_operacion.nameoperacion =  "Inicio Nodo"
        msg_operacion.descoperacion = f"{self.get_name()}"
        msg_operacion.estatusoperacion = "Iniciado"
        msg_operacion.fechaoperacion = f"{datetime.now()}"
    
        self.create_publisher(Operacion, 'top_supervisor_operaciones', 10).publish(msg_operacion)
        self.get_logger().info(f"{self.get_name()} node created: {datetime.now()}")

    def create_auditor_msg(self):
        msg = Auditor()
        msg.namenode = self.get_name()
        msg.fechatransaccion = f"{datetime.now()}"
        
        return msg

    def send_goal(self, path_bit):
        goal_msg = CargaBit.Goal()
        goal_msg.path_hex = path_bit

        self._action_client.wait_for_server()

        return self._action_client.send_goal_async(goal_msg)
    
    def listener_callback(self, msg):

        self.get_logger().info(f'{msg.path_bit}')
        action_client = CargaBitClient()
        future = action_client.send_goal(msg.path_bit)
        rclpy.spin_until_future_complete(action_client, future)

        self.get_logger().info(f'Goal enviado from {self.get_name()} to {action_client.get_name()}')
        msg_auditor = self.create_auditor_msg()
        msg_auditor.tipotransaccion = "Send Goal"
        msg_auditor.logproceso = f"Goal enviado from {self.get_name()} to {action_client.get_name()}"
        self.publisherauditor_.publish(msg_auditor)

def main(args=None):

    rclpy.init(args=args)
    carga_bit_client = CargaBitClient()
    rclpy.spin(carga_bit_client)
    carga_bit_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
