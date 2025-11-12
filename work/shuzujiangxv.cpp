#include <stdio.h>
void fun(int arr[], int t) {
    int temp, i, j;
    for (i = 0; i < t - 1; i++) {
        for (j = i + 1; j < t; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    }
    }
    return;
}

int main() {
    int a[1000], n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++) {
        if (a[i] < a[i + 1]) {
            fun(a, n);
            break;
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}