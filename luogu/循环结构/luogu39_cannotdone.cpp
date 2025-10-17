#include <stdio.h>
int main () {
    int n, sum = 0, j;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        a[i] = i + 1;
    }
    for (int i = 0; i < n; i++){
        a[i] = a[i] * a[i];
    }
    printf("%d", sum);
    return 0;

}