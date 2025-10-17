#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void custom_order(int a, int b, int c, char order[4]) {
    int nums[3] = {a, b, c};

    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (nums[i] > nums[j]) {
                swap(&nums[i], &nums[j]);
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        if (order[i] == 'A')
            printf("%d ", nums[0]);
        else if (order[i] == 'B')
            printf("%d ", nums[1]);
        else if (order[i] == 'C')
            printf("%d ", nums[2]);
    }
    printf("\n");
}

int main() {
    int a, b, c;
    char order[4];
    

    scanf("%d %d %d", &a, &b, &c);
    
    scanf("%s", order);
    
    custom_order(a, b, c, order);

    return 0;
}
