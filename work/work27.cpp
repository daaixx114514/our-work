#include <stdio.h>

int main() {
    char a, b;
    scanf("%c %c", &a, &b);
    
    if (a == b) {
        printf("DEUCE\n");
    } else if ((a == 'S' && b == 'J') || (a == 'J' && b == 'B') || (a == 'B' && b == 'S')) {
        printf("FIRST\n");
    } else {
        printf("SECOND\n");
    }
    
    return 0;
}
    