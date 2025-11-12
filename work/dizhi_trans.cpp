#include <stdio.h>
void fun(int *a1, int *b1, int *a2, int *b2) {
    int temp;
    temp = *a1;
    *a1 = *a2;
    *a2 = temp;

    temp = *b1;
    *b1 = *b2;
    *b2 = temp;
    return;
}

int main() {
    int m, n, p, q;
    scanf("%d %d %d %d", &m, &n, &p, &q);
    fun(&m, &n, &p, &q);
    printf("%d %d %d %d", m, n, p, q);
    
    return 0;
}