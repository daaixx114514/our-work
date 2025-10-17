#include <stdio.h>
int main () {
    int n, m = 0;
    scanf("%d", &n);
    int P1 = (n % 4 == 0);
    int P2 = (n % 100 != 0);
    int P3 = (n % 400 == 0);

    if (P1 && P2) {
        m++;
    }if (P1 && P3) {
        m++;
    }if (P2 && P3) {
        m++;
    }
    printf("%d", m);
    return 0;
}