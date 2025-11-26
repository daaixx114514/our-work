#include <stdio.h>

int main() {
    char c;
    char *p;
    int count = 0;
    while (*p != '\0') {
        c = *p;
        if (c >= 'a' && c <= 'z'){
            count++;
        }else {
            count = 0;
        }
    }
    if (count > 0) {
        printf("TRUE");
    }else {
        printf("FALSE");
    }
    return 0;
}