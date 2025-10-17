#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, i, temp, digit, sum, power;
    int j;  
    long long start, end;

    scanf("%d", &n);

    start = (long long)pow(10, n - 1);
    end = (long long)pow(10, n) - 1;

    for (i = start; i <= end; i++)
    {
        temp = i;
        sum = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            power = 1;
            for (j = 0; j < n; j++)  
            {
                power *= digit;
            }
            sum += power;
            temp /= 10;
        }

        if (sum == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
    