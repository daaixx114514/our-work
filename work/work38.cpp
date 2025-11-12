#include <stdio.h>
void fun (int *a, int*b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int main () {
    int n ,m;
    scanf ("%d%d", &n, &m);
    fun (&n, &m);
    printf ("%d %d\n", n, m);
    return 0;
}