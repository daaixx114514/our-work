#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int n1, n2, n3;
    scanf("%d%d%d", &n1, &n2, &n3);
    if(n1 > n2)
        swap(&n1, &n2);
    if(n1 > n3)
        swap(&n1, &n3);
    if(n2 > n3)
        swap(&n2, &n3);
    printf("%d %d %d\n", n1, n2, n3);
    return 0;
}