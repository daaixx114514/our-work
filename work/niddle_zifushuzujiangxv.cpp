#include <stdio.h>
#include <string.h>

int main() {
    char s[10][30];
    char *ptr[10];
    int i, j;
    char *temp;
    for (i = 0; i < 10; i++) {
        ptr[i] = s[i];
    }
    for (i = 0; i < 10; i++) {
        scanf("%s", s[i]);
    }
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (strcmp(ptr[i], ptr[j]) < 0) {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++) {
        printf("%s\n", ptr[i]);
    }
    return 0;
}
