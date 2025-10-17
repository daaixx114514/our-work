#include <stdio.h>
#include <math.h>

int main() {
    int s, temp, sum;
    int a[50]; 
    int i, n;

    scanf("%d", &s);

    sum = 0;
    temp = s;
    n = 0;


    while (temp != 0) {
        a[n] = temp % 10;
        temp = temp / 10;
        n = n + 1;
    }

  
    for (i = 0; i < n; i++) {
        sum = sum + (int)pow(2, a[i]);  
    }

    if (sum % 2 == 0) {
        printf("EVEN\n");
    } else {
        printf("ODD\n");
    }

    return 0;
}
