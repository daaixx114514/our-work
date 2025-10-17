#include <stdio.h>

int main() {
    int i, term, sum = 0;

    for (i = 1; i <= 299; i++) {
        term = (2 * i - 1) * (2 * i + 1);
        sum =  sum + term;
    }

    printf("%d\n", sum);

    return 0;
}
