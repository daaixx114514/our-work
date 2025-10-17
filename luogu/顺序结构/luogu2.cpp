#include <stdio.h>
int main() {
    int i, j, space, star;
    int n = 3;
    for (i = 1; i <= n; i++) {
        space = n - i;
        star = 2 * i - 1;
        for (j = 0; j < space; j++){
            printf(" ");
        }
        for (j = 0; j < star; j++){
            printf("*");
        }
        printf("\n");
    }

    for (i = n - 1; i >= 1; i--) {
        space = n - i;
        star = 2 * i - 1;
        for (j = 0; j < space; j++){
            printf(" ");
        }
        for (j = 0; j < star; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}