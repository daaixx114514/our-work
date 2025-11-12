#include <stdio.h>

int main() {
    int n;
    int a[1000]; 
    int m = 0;  

    scanf("%d", &n);

    int x = n;
    while (x != 1) {
        a[m++] = x;     
        if (x % 2 == 0) {
            x = x / 2;
        } else {
            x = x * 3 + 1;
        }
    }
    a[m++] = 1;        

    for (int i = m - 1; i >= 0; i--) {
        if (i != m - 1) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}
