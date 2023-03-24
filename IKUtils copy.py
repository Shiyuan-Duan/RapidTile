import numpy as np
import time

L1 = 182.8
L2 = 117.5
L3 = 78.5


def forward_kinematics(theta1, theta2, theta3):
    z = L1*np.cos(theta1) + L2*np.cos(theta1+theta2) + L3*np.cos(theta1+theta2+theta3)
    x = L1*np.sin(theta1) + L2*np.sin(theta1+theta2) + L3*np.sin(theta1+theta2+theta3)
    return x, z

def loss(theta1, theta2, theta3, x_target, z_target):
    x, z = forward_kinematics(theta1, theta2, theta3)
    return (z - z_target)**2 + (x - x_target)**2 + (theta1 + theta2 + theta3 - np.pi)**2


def solve_inv_kinematics(x_target, y_target, z_target, max_iter=10000):
    theta1 = 0
    theta2 = 0
    theta3 = 0
    running_loss = 0
    learn_rate = 1e-5
    for i in range(max_iter):
        running_loss = loss(theta1, theta2, theta3, x_target, z_target)
        print(f"epoch {i} | loss: {running_loss} | config: theta1: {theta1} theta2: {theta2} theta3: {theta3}")
        x, z = forward_kinematics(theta1, theta2, theta3)
        
        dloss_dz = 2*(z - z_target)
        dloss_dx = 2*(x - x_target)
        dZ_dtheta1 = -L1*np.sin(theta1) - L2*np.sin(theta1+theta2) - L3*np.sin(theta1+theta2+theta3)
        dZ_dtheta2 = -L2*np.sin(theta1+theta2) - L3*np.sin(theta1+theta2+theta3)
        dZ_dtheta3 = -L3*np.sin(theta1+theta2+theta3)

        dX_dtheta1 = L1*np.cos(theta1) + L2*np.cos(theta1+theta2) + L3*np.cos(theta1+theta2+theta3)
        dX_dtheta2 = L2*np.cos(theta1+theta2) + L3*np.cos(theta1+theta2+theta3)
        dX_dtheta3 = L3*np.cos(theta1+theta2+theta3)

        dloss_dtheta1 = dloss_dz*dZ_dtheta1 + dloss_dx*dX_dtheta1 + 2*(theta1 + theta2 + theta3 - np.pi)
        dloss_dtheta2 = dloss_dz*dZ_dtheta2 + dloss_dx*dX_dtheta2 + 2*(theta1 + theta2 + theta3 - np.pi)
        dloss_dtheta3 = dloss_dz*dZ_dtheta3 + dloss_dx*dX_dtheta3 + 2*(theta1 + theta2 + theta3 - np.pi)



        theta1 -= learn_rate * dloss_dtheta1
        theta2 -= learn_rate * dloss_dtheta2
        theta3 -= learn_rate * dloss_dtheta3   

    return theta1, theta2, theta3, running_loss



start_time = time.time()
[t1, t2, t3, rl] = solve_inv_kinematics(200, 0, 0)
end_time = time.time()

elapsed_time = (end_time - start_time) * 1000000  # convert to microseconds
print(f"Elapsed time: {elapsed_time:.2f} microseconds")

print(f"results: {t1}, {t2}, {t3} | loss: {rl}")
print(forward_kinematics(t1, t2, t3))
