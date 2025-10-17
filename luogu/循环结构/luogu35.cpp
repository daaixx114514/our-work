#include <stdio.h>
int main () {
    int num;  
    scanf("%d", &num);
    int a[num];
    for (int i = 0; i < num; i++){
        scanf("%d", &a[i]);
    }

    int min = a[0];
    for (int i = 1; i < num; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    printf("%d", min);
    return 0;
}