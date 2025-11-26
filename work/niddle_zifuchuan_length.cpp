#include <stdio.h>

int slength(char *p) {
    int n = 0;
    while (*p != '\0') {
        n++;
        p++;
    }
    return n;
}

int main() {
    char s[1000];
    int len;
    gets(s);

    len = slength(s);
    printf("%d", len);
    return 0;
}
