#include <stdio.h>

int main() {
    int n;
    while(scanf("%d", &n) == 1){
        int max = 0;
        for (int i = 1; i <= n; i++) {
            if (i > max) {
                max = i;
            }
        }
        printf("%d\n", max);
    }
    return 0;
}