#include <stdio.h>
int main () {
    int a, b, i, min, max, sum = 0;
    scanf("%d%d", &a, &b);
    if (a < b){
        min = a;
        max = b;
    }else {
        min = b;
        max = a;
    }
    for (i = min; i <= max; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;


}