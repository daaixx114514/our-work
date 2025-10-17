#include <stdio.h>
#include <math.h>
int main () {
    int n, count = 0, sum = 0;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        int Prime = 1;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                Prime = 0;
                break;
            }
        }

        if (Prime) {
            if (sum + i <= n) {
                printf("%d\n", i);
                sum += i;
                count++;
            } else {
                break;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}