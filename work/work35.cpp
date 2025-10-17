#include <stdio.h>

int comb(int n, int k)
{
    int i;
    int res = 1;
    if (k > n - k) k = n - k; 
    for (i = 1; i <= k; i++)
    {
        res = res * (n - i + 1) / i;
    }
    return res;
}

int main()
{
    int n, m;
    int denominator;

    scanf("%d %d", &n, &m);

    denominator = n * comb(n - 1, m - 1);

    printf("1/%d\n", denominator);

    return 0;
}
