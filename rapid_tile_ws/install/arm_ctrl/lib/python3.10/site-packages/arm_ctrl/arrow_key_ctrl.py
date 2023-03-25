import sys

from rt_interfaces.srv import SolveIK
import rclpy
from rclpy.node import Node


class ArrowKeyCtrl(Node):

    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(SolveIK, 'solve_ik')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = SolveIK.Request()

    def send_request(self, x, y, z):
        self.req.x = x
        self.req.y = y
        self.req.z = z
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main(args=None):
    rclpy.init(args=args)

    minimal_client = ArrowKeyCtrl()
    response = minimal_client.send_request(float(sys.argv[1]), float(sys.argv[2]), float(sys.argv[3]))
    minimal_client.get_logger().info(
        f"IK results: {response.t1}, {response.t2}, {response.t3}"
    )

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()