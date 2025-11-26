#include <stdio.h>

void fun(int a, int b, int *sum, int *diff, int *product, float *divide) {
    *sum = a + b;
    *diff = a - b;
    *product = a * b;
    *divide = (float)a / b;
}

int main() {
    int a, b;
    int sum, diff, product;
    float divide;

    scanf("%d%d", &a, &b);

    fun(a, b, &sum, &diff, &product, &divide);

    printf("%d %d %d %.2f", sum, diff, product, divide);
    return 0;
}
