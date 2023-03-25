#include "rclcpp/rclcpp.hpp"
#include "rt_interfaces/srv/solve_ik.hpp"
#include <iostream>
#include <cmath>
#include <memory>
#include <vector>
#include <chrono>


double L1 = 0.1828;
double L2 = 0.1175;
double L3 = 0.0785;
double ARM_LENGTH = L1 + L2 + L3;
std::pair<double, double> forward_kinematics(double theta1, double theta2, double theta3) {
    double z = L1 * std::cos(theta1) + L2 * std::cos(theta1 + theta2) + L3 * std::cos(theta1 + theta2 + theta3);
    double x = L1 * std::sin(theta1) + L2 * std::sin(theta1 + theta2) + L3 * std::sin(theta1 + theta2 + theta3);
    return std::make_pair(x, z);
}

double loss(double theta1, double theta2, double theta3, double x_target, double z_target) {
    std::pair<double, double> xz = forward_kinematics(theta1, theta2, theta3);
    double x = xz.first;
    double z = xz.second;
    return std::pow(z - z_target, 2) + std::pow(x - x_target, 2) + std::pow(theta1 + theta2 + theta3 - M_PI, 2);
}
std::vector<double> solve_inv_kinematics(double x_target, double y_target, double z_target, int max_iter=10000) {
    double desired_arm_length = std::sqrt(std::pow(x_target, 2) + std::pow(y_target, 2) + std::pow(z_target, 2));
    if(desired_arm_length > ARM_LENGTH){
        std::cout << "Destination " << x_target << ", " << y_target << ", " << z_target << " is not reachable"<<std::endl;
        return {0, 0, 0, 0, 0};
    }
    
    double theta1 = 0;
    double theta2 = 0;
    double theta3 = 0;
    double learn_rate = 1e-2;
    double running_loss = 0;
    for (int i = 0; i < max_iter; ++i) {
        running_loss = loss(theta1, theta2, theta3, x_target, z_target);
        auto [x, z] = forward_kinematics(theta1, theta2, theta3);

        double dloss_dz = 2*(z - z_target);
        double dloss_dx = 2*(x - x_target);
        double dZ_dtheta1 = -L1*sin(theta1) - L2*sin(theta1+theta2) - L3*sin(theta1+theta2+theta3);
        double dZ_dtheta2 = -L2*sin(theta1+theta2) - L3*sin(theta1+theta2+theta3);
        double dZ_dtheta3 = -L3*sin(theta1+theta2+theta3);

        double dX_dtheta1 = L1*cos(theta1) + L2*cos(theta1+theta2) + L3*cos(theta1+theta2+theta3);
        double dX_dtheta2 = L2*cos(theta1+theta2) + L3*cos(theta1+theta2+theta3);
        double dX_dtheta3 = L3*cos(theta1+theta2+theta3);

        double dloss_dtheta1 = dloss_dz*dZ_dtheta1 + dloss_dx*dX_dtheta1 + 2*(theta1 + theta2 + theta3 - M_PI);
        double dloss_dtheta2 = dloss_dz*dZ_dtheta2 + dloss_dx*dX_dtheta2 + 2*(theta1 + theta2 + theta3 - M_PI);
        double dloss_dtheta3 = dloss_dz*dZ_dtheta3 + dloss_dx*dX_dtheta3 + 2*(theta1 + theta2 + theta3 - M_PI);

        theta1 -= learn_rate * dloss_dtheta1;
        theta2 -= learn_rate * dloss_dtheta2;
        theta3 -= learn_rate * dloss_dtheta3;
    }
    return {theta1, theta2, theta3, running_loss, 1};
}
void solve(const std::shared_ptr<rt_interfaces::srv::SolveIK::Request> request,
          std::shared_ptr<rt_interfaces::srv::SolveIK::Response>      response)
{
    auto thetas = solve_inv_kinematics(request->x, request->y, request->z);
    response->t1 = thetas[0];
    response->t2 = thetas[1];
    response->t3 = thetas[2];
    response->success = thetas[4] != 0;

}
void add(const std::shared_ptr<rt_interfaces::srv::SolveIK::Request> request,
          std::shared_ptr<rt_interfaces::srv::SolveIK::Response>      response)
{
  response->mis = request->x + request->y + request->z;
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\nx: %f" " z: %f",
                request->x, request->z);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: [%f]", (double)response->mis);
}

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("solve_ik_server");

  rclcpp::Service<rt_interfaces::srv::SolveIK>::SharedPtr service =
    node->create_service<rt_interfaces::srv::SolveIK>("solve_ik", &solve);

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to solve IK.");

  rclcpp::spin(node);
  rclcpp::shutdown();
}