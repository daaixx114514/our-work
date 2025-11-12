#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int count[7] = {0};
    int zhongjianghaoma[7];

    for (int i = 0; i < 7; i++) {
        scanf("%d", &zhongjianghaoma[i]);
    }

    int caipiao[n][7];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 7; j++) {
            scanf("%d", &caipiao[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        int mach_count = 0;
        for (int j = 0; j < 7; j++) {
            for (int k = 0; k < 7; k++) {
                if (caipiao[i][j] == zhongjianghaoma[k]) {
                    mach_count++;
                    break;
                }
            }
        }

        if (mach_count == 7) {
            count[0]++;
        } else if (mach_count == 6) {
            count[1]++;
        } else if (mach_count == 5) {
            count[2]++;
        } else if (mach_count == 4) {
            count[3]++;
        } else if (mach_count == 3) {
            count[4]++;
        } else if (mach_count == 2) {
            count[5]++;
        } else if (mach_count == 1) {
            count[6]++;
        }
    }

    for (int i = 0; i < 7; i++) {
        printf("%d ", count[i]);
    }
    printf("\n");

    return 0;
}
