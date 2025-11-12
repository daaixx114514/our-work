#include <stdio.h>

int main() {
    int n, i, j;
    int a[20][20];
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                a[i][j] = 1;
            else
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d", a[i][j]);
            if (j < i)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}