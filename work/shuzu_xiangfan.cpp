#include <stdio.h>
void fun(int arr[], int t) {
    int res[1000], i;
    for (i = 0; i < t; i++) {
        arr[i] = -arr[i];
    }
    return;
}

int main() {
    int n, arr[1000], i, res[1000];
    scanf("%d", &n);
    for (i = 0; i < n;i++) {
        scanf("%d", &arr[i]);
    }
    fun(arr, n);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}