#include <stdio.h>

#define MAX_SIZE 1000

int main() {
    int n, count = 0, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        if (num % 2 == 0) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
