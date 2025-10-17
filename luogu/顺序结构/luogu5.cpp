#include <stdio.h>
int main(){
    int i, j, space, star;
    char c;
    int n = 3;
    scanf("%c", &c);
    for (i = 1; i <= n; i++){
        space = n - i;
        star = 2 * i - 1;
        for (j = 1; j <= space; j++){
            printf(" ");
        }
        for (j = 1; j <= star; j++){
            printf("%c", c);
        }
        printf("\n");
    }
}