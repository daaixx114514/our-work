#include <stdio.h>
int main () {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int score = a * 0.2 + b * 0.3 + c * 0.5;
    printf("%d\n", score);
    return 0;
}