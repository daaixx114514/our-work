#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);

    int fuhao = 1;
    if (n < 0) {
        fuhao = -1;
        n = -n;
    }

    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    rev *= fuhao;
    printf("%d\n", rev);
}