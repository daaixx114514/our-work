#include <stdio.h>
int main () {
    int n, temp;
    scanf("%d", &n);

    int bai = n / 100;
    int shi = (n % 100) / 10;
    int ge = n % 10;

    if (bai > shi) {
        temp = bai;
        bai = shi;
        shi = temp;
    }
    if (bai > ge) {
        temp = bai;
        bai = ge;
        ge = temp;
    }
    if (shi > ge) {
        temp = shi;
        shi = ge;
        ge = temp;
    }
    printf("%d\n", bai * 1 + shi * 10 + ge * 100);


}