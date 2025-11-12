#include <stdio.h>
int fun(int arr[], int t) {
    int sum = 0, i;
    for (i = 0; i < t; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int N, arr[1000], i, result;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    result = fun(arr, N);
    printf("%d", result);
    
    return 0;
}