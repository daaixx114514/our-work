import random
import math
import matplotlib.pyplot as plt

def monte_carlo_pi(n):
    count_inside = 0
    points_inside_x = []
    points_inside_y = []
    points_outside_x = []
    points_outside_y = []
    
    for i in range(n):
        x = random.uniform(-1, 1)
        y = random.uniform(-1, 1)
        
        if x**2 + y**2 <= 1:
            count_inside += 1
            points_inside_x.append(x)
            points_inside_y.append(y)
        else:
            points_outside_x.append(x)
            points_outside_y.append(y)
    
    pi_estimate = 4 * count_inside / n
    
    # 绘制图形
    plt.figure(figsize=(8, 8))
    plt.scatter(points_inside_x, points_inside_y, color='red', s=1, alpha=0.5)
    plt.scatter(points_outside_x, points_outside_y, color='blue', s=1, alpha=0.5)
    plt.title(f'蒙特卡洛方法计算π (n={n}, π≈{pi_estimate:.6f})')
    plt.xlabel('x')
    plt.ylabel('y')
    plt.axis('equal')
    plt.show()
    
    return pi_estimate

# 不同样本量的测试
sample_sizes = [1000, 10000, 100000]
results = {}

for n in sample_sizes:
    pi_est = monte_carlo_pi(n)
    results[n] = pi_est
    print(f"样本量 {n}: π ≈ {pi_est:.6f}, 误差: {abs(pi_est - math.pi):.6f}")