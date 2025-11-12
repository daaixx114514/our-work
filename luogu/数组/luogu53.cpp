#include <stdio.h>

int main(void) {
    long long a[110];     
    int cnt = 0;
    long long x;

    while (scanf("%lld", &x) == 1) {
        if (x == 0) break;
        a[cnt++] = x;
    }

    for (int i = cnt - 1; i >= 0; i--) {
        if (i != cnt - 1) putchar(' ');
        printf("%lld", a[i]);
    }
    putchar('\n');

    return 0;
}
