#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n, i;
    int arr1[50];
    int arr2[50];
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    for (i = 0; i < n; i++) {
        swap(&arr1[i], &arr2[i]);
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    
    return 0;
}