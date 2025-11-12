#include <stdio.h>
int GCD(int a, int b) {
    int temp;
    if (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
        return GCD(a, b);
    }
    return a;
}


int main() {
    int a, b, res;
    scanf("%d %d", &a, &b);
    res = GCD(a, b);
    printf("%d", res);
    return 0;
}