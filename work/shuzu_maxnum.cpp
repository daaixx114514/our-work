#include <stdio.h>
#include <math.h>
int fun(int arr[], int t) {
    int max = arr[0], i;
    for (i = 1; i < t; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    for (i = 0; i < t; i++) {
        if (arr[i] == max) {
            return i;
        }
    }
}

int main() {
    int N, x[1000], i;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        x[i] = N * sin(i * 0.16);
    }

    printf("%d", fun(x, N));
    return 0;
}