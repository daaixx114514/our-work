#include <stdio.h>

int isPalindrome(int num) {
    int temp = num;
    int reverse = 0;
    while (temp != 0) {
        reverse = reverse * 10 + temp % 10;
        temp = temp / 10;
    }
    return reverse == num; 

int main() {
    int m, n, i;
    scanf("%d %d", &m, &n);

    if (m > n) {
        int t = m;
        m = n;
        n = t;
    }

    for (i = m; i <= n; i++) {
        if (isPalindrome(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}