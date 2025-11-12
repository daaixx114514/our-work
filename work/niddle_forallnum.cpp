#include <stdio.h>
#include <math.h>

int main() {
    int N, i;
    int a[1000];
    int *p;
    scanf("%d", &N);
    p = a;
    for (i = 0; i < N; i++) {
        *(p + i) = (int)(600 * cos(i * 0.35));
    }
    for (i = 0; i < N; i++) {
        printf("%d ", *(p + i));
    }


    return 0;
}