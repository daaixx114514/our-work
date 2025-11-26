#include <stdio.h>

void plug_zifu(char s[]) {
    int len = 0;
    int i;

    while (s[len] != '\0') len++;

    for (i = len - 1; i >= 0; i--) {
        s[2 * i] = s[i];
        s[2 * i + 1] = ' ';
    }
    s[2 * len] = '\0';
}

int main() {
    char s[100];
    gets(s);
    plug_zifu(s);
    printf("%s", s);
    return 0;
}
