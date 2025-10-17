#include <stdio.h>
#include <math.h>

int main() {
    int m, i;
    int isPrime = 1;  // 假设是素数
    
    scanf("%d", &m);  // 输入整数

    if (m <= 3) {  // 根据题目要求，m必须大于3
        isPrime = 0;  // 小于等于3的数不满足条件
    } else {
        for (i = 2; i <= sqrt(m); i++) {  // 检查2到sqrt(m)的整数
            if (m % i == 0) {
                isPrime = 0;  // 找到一个因数，m不是素数
                break;
            }
        }
    }

    // 根据判断结果输出
    if (isPrime) {
        printf("%d is a prime number\n", m);
    } else {
        printf("%d is not a prime number\n", m);
    }

    return 0;
}
