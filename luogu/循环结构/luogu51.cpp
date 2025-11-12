#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    for (int X = 100; X >= 1; --X) {
        int diff = N - 364 * X;
        if (diff > 0 && diff % 1092 == 0) {
            int K = diff / 1092;
            printf("%d\n%d\n", X, K);
            return 0;
        }
    }
    return 0;
}
