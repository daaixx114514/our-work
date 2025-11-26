#include <stdio.h>

void s_count(char *p) {
    int letter_count = 0, space_count = 0, digit_count = 0, other_count = 0;

    while (*p != '\0') {
        char c = *p;
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letter_count++;
        } else if (c == ' ') {
            space_count++;
        } else if (c >= '0' && c <= '9') {
            digit_count++;
        } else {
            other_count++;
        }
        p++;
    }

    printf("%d %d %d %d", letter_count, digit_count, space_count, other_count);
}

int main() {
    char str[1000];
    gets(str);
    s_count(str);
    return 0;
}
