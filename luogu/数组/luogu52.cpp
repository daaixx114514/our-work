#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    int a[n];
    int count[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        count[i] = 0;
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i]) {
                count[i]++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", count[i]);
    }
    return 0;
}