import math
from scipy import stats

n = 1000
p = 0.002

# 二项分布计算
prob_binomial = 1 - stats.binom.cdf(1, n, p)
print(f"二项分布计算结果：P(X≥2) = {prob_binomial:.6f}")
# 泊松分布计算
lambda_poisson = n * p
prob_poisson = 1 - stats.poisson.cdf(1, lambda_poisson)
print(f"泊松分布计算结果：P(X≥2) = {prob_poisson:.6f}")
# 指数分布计算
lambda_exp = 1/2000
prob_return = stats.expon.cdf(1600, scale=1/lambda_exp)
print(f"电子元件被退换的概率：P(X<1600) = {prob_return:.6f}")
# 正态分布计算
mu = 160
sigma = 20
n_components = 50

# 单个元件寿命在140-180小时的概率
prob_single = stats.norm.cdf(180, mu, sigma) - stats.norm.cdf(140, mu, sigma)

# 50个元件中至少有5个满足条件的概率
prob_at_least_5 = 1 - stats.binom.cdf(4, n_components, prob_single)

print(f"单个元件寿命在140-180小时的概率：{prob_single:.6f}")
print(f"50个元件中至少有5个满足条件的概率：{prob_at_least_5:.6f}")