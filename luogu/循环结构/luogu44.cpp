#include <stdio.h>
int main () {
    double s, length = 2.0;
    float sum = 0;
    int count = 0;
    scanf("%lf", &s);
    while (sum + 1e-9 < s) {
        sum += length;
        length *= 0.98;
        count++;
    }
    printf("%d\n", count);
    return 0;
}