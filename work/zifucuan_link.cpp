#include <stdio.h>

void mystrcat(char str1[], char str2[]) {
    int i;
    int j;
    i = 0;
    j = 0;
    while (str1[i] != '\0') i++;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

int main() {
    char str1[50];
    char str2[50];

    gets(str1);
    gets(str2);

    mystrcat(str1, str2);
    printf("%s", str1);

    return 0;
}
