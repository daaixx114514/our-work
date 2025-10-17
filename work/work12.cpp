#include <stdio.h>

int main() {
    int a, b, sum, min, max, i;
    scanf("%d %d", &a, &b);

    sum = 0;

    if (a < b)
        min = a, max = b;
    else
        min = b, max = a;

    i = min;
    while (i <= max) {
        if (i % 2 != 0)
            sum = sum + i;
        i = i + 1;
    }

    printf("%d\n", sum);
    return 0;
}
