#include <stdio.h>
int main () {
    int a, b, max, min;
    scanf("%d %d", &a, &b);
    if (a - b == 1 || b - a == 1) {
        printf("TRUE\n");
    }else {
        printf("FALSE\n");
    }
    return 0;
}