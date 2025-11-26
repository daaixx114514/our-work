#include <stdio.h>

void del(char s[], char c) {
    int i;
    int j;
    i = 0;
    j = 0;
    while (s[i] != '\0') {
        if (s[i] != c) {
            s[j] = s[i];
            j++;
        }
        i++;
    }
    s[j] = '\0';
}

int main() {
    char s[50];
    char ch;
    int c;
    int i;

    i = 0;
    while (1) {
        c = getchar();
        if (c == '\n' || c == EOF) break;
        s[i] = (char)c;
        i++;
    }
    s[i] = '\0';

    ch = getchar();

    del(s, ch);
    printf("%s", s);

    return 0;
}
