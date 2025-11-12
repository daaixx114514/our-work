#include <stdio.h>

int main() {
    char c;
    int letter_count = 0, space_count = 0, digit_count = 0, other_count = 0;
    
    while ((c = getchar()) != '\n') {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letter_count++; 
        } else if (c == ' ') {
            space_count++;   
        } else if (c >= '0' && c <= '9') {
            digit_count++;  
        } else {
            other_count++;   
        }
    }
    printf("%d %d %d %d", letter_count, space_count, digit_count, other_count);
    
    return 0;
}
