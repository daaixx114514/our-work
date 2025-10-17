#include <stdio.h>

int main() {
    int n, i, maxCount, score;
    int scores[300];     
    int count[101] = {0}; 

    scanf("%d", &n);


    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
        count[scores[i]] = count[scores[i]] + 1;
    }


    maxCount = 0;
    for (i = 0; i <= 100; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
        }
    }

    for (i = 0; i <= 100; i++) {
        if (count[i] == maxCount) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
