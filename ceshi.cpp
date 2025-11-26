#include <stdio.h>

int main() {
    char s[120];
    int i;
    int c;

    i = 0;
    while (i < 119) {
        c = getchar();
        if (c == '\n' || c == EOF)
            break;
        s[i] = (char)c;
        i++;
    }
    s[i] = '\0';

    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] = s[0] - 'a' + 'A';

    i = 1;
    while (s[i] != '\0') {
        if (s[i - 1] == ' ' && s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 'a' + 'A';
        i++;
    }

    printf("%s", s);
    return 0;
}
