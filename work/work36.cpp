#include <stdio.h>

int fun(int a) {
    int b = a - 1;
    return b;
}

int main() {
    int a;
    int result; 
    scanf("%d", &a);
    result = fun(a);
    printf("%d\n", result);
    return 0;
}
