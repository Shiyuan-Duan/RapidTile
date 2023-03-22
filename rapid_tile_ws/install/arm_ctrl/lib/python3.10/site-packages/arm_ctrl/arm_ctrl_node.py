import rclpy
from rclpy.node import Node
import serial

class ArmCtrlNode(Node):

    def __init__(self):
        super().__init__('arm_ctrl_node')
        self.ser = serial.Serial('/dev/ttyACM0', 9600, timeout=1)
        self.get_logger().info('Serial port initialized')

    def run(self):
        while rclpy.ok():
            user_input = input('Enter command to send: ')
            self.ser.write(user_input.encode())
            self.get_logger().info(f'Sent command: {user_input}')

    def __del__(self):
        self.ser.close()

def main(args=None):
    rclpy.init(args=args)
    arm_ctrl_node = ArmCtrlNode()
    arm_ctrl_node.run()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
