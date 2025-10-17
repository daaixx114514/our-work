#include <stdio.h>
int main () {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int hour = c - a;
    int min = d - b;
    if (min < 0){
        min += 60;
        hour--;
    }
    printf("%d %d\n", hour, min);
}