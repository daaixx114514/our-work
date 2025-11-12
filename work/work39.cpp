#include <stdio.h>

void fun(int *a, int *b, int t) {
    int i;
    for (i = 1; i <= t; i++) {
        if (i % 2 != 0) {
            *a = -(*a);
        } else {
            *b = -(*b);
        }
    }
}

int main() {
    int m, n, t;
    scanf("%d %d %d", &m, &n, &t);
    fun(&m, &n, t);
    printf("%d %d\n", m, n);
    return 0;
}
