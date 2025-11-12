#include <stdio.h>

int gcd(int x, int y) {
    while (y != 0) {
        int temp = x % y;
        x = y;
        y = temp;
    }
    return x;
}

int main() {
    int i, j, k, sum, factor_count;
    int factors[500];  

    for (i = 1; i <= 1000; i++) {
        sum = 0;
        factor_count = 0;
        
        for (j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                sum += j;  
                factors[factor_count++] = j;
            }
        }
        
        if (sum == i) {  
            printf("%d:its factors are ", i);
            for (k = 0; k < factor_count; k++) {
                printf("%d ", factors[k]);
            }
            printf("\n");
        }
    }
    
    return 0;
}
