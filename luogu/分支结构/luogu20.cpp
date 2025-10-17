#include <stdio.h>
int main () {
    int m, t, s;
    scanf("%d%d%d", &m, &t, &s);
    if(t == 0){
        printf("Error: Division by zero");
        return 1;
    }
    int loss = s / t;
    printf("%d", m - loss);
    return 0;
}