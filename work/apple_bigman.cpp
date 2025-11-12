#include <stdio.h>

int main() {
    int a[12], i, j, sum, max_sum = -1, start = 0;
    for (i = 0; i < 12; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 12; i++) {
        sum = 0;
        for (j = 0; j < 5; j++) {
            sum += a[(i + j) % 12];
        }
        if (sum > max_sum) {
            max_sum = sum;
            start = i + 1;
        }
    }
    printf("%d\n", start);
    return 0;
}
//不必存存储每个月的苹果数量，只需在输入时计算每5个月的和并更新最大值即可。//这样可以节省空间，提高效率。
