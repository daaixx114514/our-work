#include <stdio.h>
#include <math.h>
int main () {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("%.1f\n", area);
    return 0;
}