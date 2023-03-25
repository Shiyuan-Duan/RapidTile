import sys

from rt_interfaces.srv import SolveIK
import rclpy
from rclpy.node import Node
import tty
import termios
import serial
import json
class ArrowKeyCtrl(Node):

    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(SolveIK, 'solve_ik')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = SolveIK.Request()
        self.x = 0
        self.y = 0
        self.z = 0

        self.step_size = 0.05
        # try:
        #     ser = serial.Serial('/dev/ttyACM0', 9600)
        # except serial.SerialException:
        #     self.get_logger().error(f"Could not open serial port {'/dev/ttyACM0'}")
        #     rclpy.shutdown()
        #     return

        # self.ser = serial.Serial('/dev/ttyACM0', 9600)


    def send_request(self, x, y, z):
        self.req.x = x
        self.req.y = y
        self.req.z = z
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()

    def listen_for_keyboard_input(self):
        while True:
            key = input('Type a key and press enter: ')
            if key == 'a':
                self.z += self.step_size
            if key == 's':
                self.x -= self.step_size
            if key == 'd':
                self.z -= self.step_size
            if key == 'w':
                self.x += self.step_size
        
            response = self.send_request(float(self.x), float(self.y), float(self.z))
            if(response.success):
                json_str = json.dumps({'t1':response.t1, 't2':response.t2, 't3':response.t3})
                print(json_str)

            self.get_logger().info(f'Current coord: {self.x}, {self.y}, {self.z}')
            self.get_logger().info(f'Thetas to send: {response.t1}, {response.t2}, {response.t3} | success: {response.success}')


def main(args=None):
    rclpy.init(args=args)

    node = ArrowKeyCtrl()
    node.listen_for_keyboard_input()
    rclpy.spin(node)
    rclpy.shutdown()

    # response = minimal_client.send_request(float(sys.argv[1]), float(sys.argv[2]), float(sys.argv[3]))
    # minimal_client.get_logger().info(
    #     f"IK results: {response.t1}, {response.t2}, {response.t3}"
    # )

    # minimal_client.destroy_node()
    # rclpy.shutdown()


if __name__ == '__main__':
    main()