#include <stdio.h>
#include <math.h>

int main() {
    int i, n, sum, temp, digit_count;

   
    for (i = 1; i <= 9999; i++) {
       
        temp = i;
        digit_count = 0;
        while (temp != 0) {
            temp /= 10;
            digit_count++;
        }

      
        sum = 0;
        temp = i;
        while (temp != 0) {
            n = temp % 10;
            sum += pow(n, digit_count);  
            temp /= 10;
        }

      
        if (sum == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}
