#include <stdio.h>

int main() {
    int n;
    int a[10][10];
    int i, j;
    int num = 1;
    int top, bottom, left, right;

    scanf("%d", &n);

    top = 0;
    bottom = n - 1;
    left = 0;
    right = n - 1;

    while (num <= n * n) {
        for (j = left; j <= right && num <= n * n; j++)
            a[top][j] = num++;
        top++;

        for (i = top; i <= bottom && num <= n * n; i++)
            a[i][right] = num++;
        right--;

        for (j = right; j >= left && num <= n * n; j--)
            a[bottom][j] = num++;
        bottom--;

        for (i = bottom; i >= top && num <= n * n; i--)
            a[i][left] = num++;
        left++;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%3d", a[i][j]);
        printf("\n");
    }

    return 0;
}
