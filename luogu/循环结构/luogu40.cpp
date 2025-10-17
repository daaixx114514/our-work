#include <stdio.h>
int main () {
    int n, m, count = 0;
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++) {
        int num = i;
        while (num > 0) {
            if (num % 10 == m) count++;
            num /= 10;
        }
    }
    printf("%d\n", count);
    return 0;
}