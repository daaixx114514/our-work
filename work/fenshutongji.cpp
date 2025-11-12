#include <stdio.h>

int main() {
    int n, i, score, max = 0;
    int count[101] = {0};
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &score);
        count[score]++;
        if (count[score] > max) {
            max = count[score];
        }
    }
    for (i = 0; i <= 100; i++) {
        if (count[i] == max) {
            printf("%d ", i);
        }
    }
    return 0;
}
