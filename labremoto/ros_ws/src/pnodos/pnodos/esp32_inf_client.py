import rclpy
from pvariables.msg import FileBinLoad #Mensaje igual a filehexload
from pvariables.action import BinCharge
from rclpy.node import Node
from parent_class import NodeFather, ActionParentClient

class ESP32ActionClient(Node,NodeFather,ActionParentClient):

    def __init__(self):
        #Agregar self a la inicialización de clases
        Node.__init__(self,'esp32_inf_client')
        NodeFather.__init__(self,'top_files_bin')
        #Se da como parámetro el self, el action_type y el action_name
        ActionParentClient.__init__(self, BinCharge, 'esp32_inf')
    
        #Se suscribe a transactioner.py para recibir la orden de acción
        self.subscription_ = self.create_subscription(FileBinLoad, self.topic_code, self.listener_callback, 10)
        self.subscription_

        self.initialization_notice()

    def listener_callback(self, msg):
        NodeFather.publisher_consoler(self,'ESP32 Action initialized.')
        #Mandar el mensaje a la function_callback del ActionParentClient Class
        self.send_goal(path_bin=msg.path_bin) #Envia la goal con los paramétros según el tipo de acción
    
def main(args=None):
    rclpy.init(args=args)
    esp32_inf_client = ESP32ActionClient()
    rclpy.spin(esp32_inf_client)
    
if __name__ == "__main__":
    main() 