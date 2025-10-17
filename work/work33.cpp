#include <stdio.h>
int main(){
    int N;
    int i;
    int sum;
    int current;
    int diff;

    scanf("%d", &N);

    sum = 0;
    current = 1; 
    diff = 4;    

    for (i = 1; i <= N; i++)
    {
        printf("%d\n", current);
        sum += current;
        current += diff;
        diff += 2;  
    }

    printf("%d\n", sum);

    return 0;
}
