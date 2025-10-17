#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);

    m = 1;
    while (m * m < n) {
        m = m + 1;
    }

    if (m * m == n)
        printf("TRUE");
    else
        printf("FALSE");

    return 0;
}
