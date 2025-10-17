#include <stdio.h>
int main () {
    float pi = 3.14;
    int h, r;
    scanf("%d%d", &h, &r);
    float volume = pi * r * r * h * 0.001;
    float num = 20 / volume;
    if (num - (int)num > 0) {
        printf("%d\n", (int)num + 1);
    } else {
        printf("%d\n", (int)num);
    }
return 0;
}