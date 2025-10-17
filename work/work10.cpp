#include <stdio.h>
int main (){
    int a, b, c, n;
    scanf("%d", &n);
    a = n/100;
    b = (n-a*100)/10;
    c = n - a*100 - b*10;
    if (a*a*a + b*b*b + c*c*c == n) {
        printf("TRUE");
    }
    else{
        printf("FALSE");
    }
return 0;
}