#include <stdio.h>
#include <math.h>

int main() {
    double a, x_past, diff, x_future;
    scanf("%lf", &a);
    x_past = a;
    diff = 1.0;
    while (diff > 1e-5) {
        x_future = (a / x_past + x_past) / 2;
        diff = x_past - x_future;
        diff = fabs(diff);
        x_past = x_future;
    }
    printf("%.5f\n", (double)x_future);
    return 0;
}