#include <stdio.h>

int main() {
    int a[4][4];
    int *p;
    int N;
    int i, j, sum = 0;
    scanf("%d", &N);
    p = &a[0][0];
    for (i = 0; i < 16; i++) {
        *(p + i) = N++;
    }
    for (i = 0; i < 4; i++) {
        sum += a[i][i];
        sum += a[i][3 - i];
    }
    printf("%d\n", sum);
    return 0;
}
