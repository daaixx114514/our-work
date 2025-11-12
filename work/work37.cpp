#include <stdio.h>
#include <math.h>
float fun (float a, float b) {
    float len;
    len = sqrt((a * a) + (b * b));
    return len;
}
int main () {
    float m, n, result;
    scanf("%f %f", &m, &n);
    result = fun(m, n);
    printf("%.2f\n", result);
    return 0;
}