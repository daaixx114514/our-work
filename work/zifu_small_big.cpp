#include <stdio.h>

int main() {
    char str[999];
    char *p;
    int found = 0;
    gets(str);
    p = str;
    while (*p != '\0') {
        if (*p < 'a' || *p > 'z') {
            found = 1;
            break;
        }
        p++;
    }
    if (!found)
        printf("TRUE\n");
    else
        printf("FALSE\n");
    return 0;
}
