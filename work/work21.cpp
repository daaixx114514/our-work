#include <stdio.h>

int main() {
    char bin[51];  
    int i, length;


    scanf("%s", bin);


    length = 0;
    while (bin[length] != '\0') {
        length = length + 1;
    }


    if (bin[length - 1] == '1') {
        printf("ODD\n");
    } else {
        printf("EVEN\n");
    }

    return 0;
}
