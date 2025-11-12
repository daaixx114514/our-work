#include <stdio.h>

int main() {
    int i, count = 0;
    int a[10];
    int b;
    for (i = 0; i < 10; i++) {
        scanf("%d",  &a[i]);
    }
    scanf("%d", &b);
    
    for (i = 0; i < 10; i++) {
        if (a[i] <= b + 30){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}