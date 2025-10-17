#include <stdio.h>


int gcd(int x, int y) {
    while (y != 0) {
        int temp = x % y;
        x = y;
        y = temp;
    }
    return x;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);


    int g = gcd(a, b);
    g = gcd(g, c);


    if (g != 0) {
        a /= g;
        b /= g;
        c /= g;
    }

    int min = a, max = a;
    if (b < min) min = b;
    if (c < min) min = c;
    if (b > max) max = b;
    if (c > max) max = c;

    printf("%d/%d\n", min, max);
    return 0;
}
