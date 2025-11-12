#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int max = 1, len = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1] + 1) len++;
        else len = 1;
        if (len > max) max = len;
    }

    printf("%d\n", max);
    return 0;
}
