#include <stdio.h>
int main()
{
    int N, M, i, j;
    scanf("%d %d", &N, &M);   
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", M);
        }
        printf("\n");
    }   
    return 0;
}
    