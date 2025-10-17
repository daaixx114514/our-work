#include <stdio.h>
#include <math.h>

int main () {
    int n;
    double F;
    scanf("%d", &n);
    F = (pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n)) / sqrt(5);
    printf("%.2f", F);
    return 0;

}