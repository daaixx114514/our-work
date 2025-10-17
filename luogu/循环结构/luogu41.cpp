#include <stdio.h>

int main() {
    int k;
    scanf("%d", &k);

    int coins = 0; 
    int day = 0;   
    int n = 1;      

    while (day + n <= k) {       
        coins += n * n;        
        day += n;               
        n++;                    
    }

    coins += n * (k - day);      
    printf("%d\n", coins);

    return 0;
}
