#include <stdio.h>
int main () {
    int n;
    scanf ("%d", &n);
    int num = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%02d", num++);
        }
        printf("\n");
    }
    printf("\n");

    num = 1;

    for (int i = 1; i <= n; i++) {
        for (int s = 0; s < (n - i) * 2; s++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%02d", num++);
        }
        printf("\n");
        }




    return 0;
}