#include <stdio.h>
#include <string.h>

int main() {
    char s1[21], s2[21];
    int i, diff = 0;

    gets(s1);
    gets(s2);

    for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            diff = s1[i] - s2[i];
            break;
        }
    }
    if (diff == 0)
        diff = s1[i] - s2[i];

    printf("%d", diff);
    return 0;
}
