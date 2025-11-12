#include <stdio.h>
#include <math.h>
float fun(int a1, int b1, int a2, int b2) {
    return sqrt((a2 - a1) * (a2 - a1) + (b2 - b1) * (b2 - b1));    
}

int main() {
    int a1, b1, a2, b2;
    float distance;
    scanf("%d %d %d %d", &a1, &b1, &a2, &b2);
    distance = fun(a1, b1, a2, b2);
    printf("%.2f", distance);
    return 0;
}