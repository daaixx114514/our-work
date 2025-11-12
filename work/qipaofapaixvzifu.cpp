#include <stdio.h>
void bubblesort(char s[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (s[j] > s[j + 1]) {
                char temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}

int main() {
    char str[10];
    scanf("%s", str);
    bubblesort(str, 10);
    printf("%s", str);
    return 0;
}