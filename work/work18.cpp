#include <stdio.h>

int main() {
    char word[101];   
    int char_count = 0;
    int word_count = 0; 
    
 
    while (scanf("%100s", word) == 1) {
        int i = 0;
        while (word[i] != '\0') {  
            char_count = char_count + 1;
            i = i + 1;
        }
        word_count = word_count + 1;
    }

    if (word_count > 0) {
        double avg = (double)char_count / word_count;
        printf("%.2f\n", avg);
    } else {
        printf("0.00\n");
    }

    return 0;
}
