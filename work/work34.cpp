#include <stdio.h>

int main()
{
    int m, n;
    char str[5]; 
    int i, j, sum;

    scanf("%d %d", &m, &n);

    for (i = m; i <= n; i++)
    {
       
        sprintf(str, "%d", i);

        sum = 0;
        for (j = 0; str[j] != '\0'; j++)
        {
            sum += str[j] - '0';  
        }

        if (sum * sum * sum == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
