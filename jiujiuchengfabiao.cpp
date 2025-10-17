#include <stdio.h>

int main() {
    int a[10][10];  // 用来存储乘法表结果
    int i, j;

    // 赋值
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= i; j++) {
            a[i][j] = i * j;
        }
    }

    // 打印
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d*%d=%-2d ", j , i, a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
