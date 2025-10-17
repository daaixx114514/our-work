#include <stdio.h>
#include <ctype.h>
int main(){
    char c;
    scanf("%c", &c);
    c = toupper(c);
    printf("%c\n", c);
    return 0;
}