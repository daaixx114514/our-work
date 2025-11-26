#include <stdio.h>

int main() {
    char str[999];
    char *p;
    int count = 0;
    gets(str);
    p = str;
    while (*p != '\0') {
        if (*p == ' ') {
            count++;
        }
        p++;
    }
    printf("%d", count);
    return 0;
}
