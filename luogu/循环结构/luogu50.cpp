#include <stdio.h>
int max(int a[], int n) {
    int m = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > m) {
            m = a[i];
        }
    }
    return m;
}

int min(int a[], int n) {
    int m = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < m) {
            m = a[i];
        }
    }
    return m;
}
int main() {
    int n;
    int sum = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
    for (int i = 1; i <= n; i++) {
        sum += a[i - 1];
    }
    sum = sum - max(a, n) - min(a, n);
    double avg = (double)sum / (n - 2);
    printf("%.2f\n", avg);
    return 0;

    }
