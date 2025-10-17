#include <stdio.h>
int main () {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a <= b && b <= c) {
        printf("TRUE\n");
    }else {
        printf("FALSE\n");
    }
    return 0;
}