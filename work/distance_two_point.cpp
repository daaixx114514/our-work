#include <stdio.h>
#include <math.h>
float fun(float a, float b) {
    float distance;
    distance = sqrt(a * a + b * b);
    return distance;
}

int main() {
    float m, n;
    float result;
    scanf("%f %f", &m, &n);
    result = fun(m, n);
    printf("%.2f", result);
    return 0;
}