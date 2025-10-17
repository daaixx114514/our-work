#include <stdio.h>

int main() {
    int n, i, j, count;
    int cells[1000];

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        cells[i] = 0;
    }

    for (i = 1; i <= n; i++) {
        for (j = i; j <= n; j += i) {
            if (cells[j] == 0) {
                cells[j] = 1;
            } else {
                cells[j] = 0;
            }
        }
    }

    count = 0;
    for (i = 1; i <= n; i++) {
        if (cells[i] == 1) {
            count = count + 1;
        }
    }

    printf("%d\n", count);

    return 0;
}
