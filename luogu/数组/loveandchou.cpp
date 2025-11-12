#include <stdio.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int sum = 0;
    for (int i = 0; i < m; i++) sum += a[i];
    int min = sum;

    for (int i = m; i < n; i++) {
        sum = sum - a[i - m] + a[i];
        if (sum < min) min = sum;
    }

    printf("%d\n", min);
    return 0;
}
