#include <stdio.h>

int main() {
    int a[10], b, i, count = 0;

    // 输入 10 个数和 b
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &b);

    // 判断
    for (i = 0; i < 10; i++) {
        if (b + 30 >= a[i]) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
