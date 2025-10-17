#include <stdio.h>

int main() {
    int week1[7], week2[7], total[7];
    for (int i = 0; i < 7; i++) {
        scanf("%d %d", &week1[i], &week2[i]);
        total[i] = week1[i] + week2[i];
    }

    int max = 0;
    int day = 0;
    for (int i = 0; i < 7; i++) {
        if (total[i] > 8 && total[i] > max) {
            max = total[i];
            day = i + 1; 
        }
    }

    if (day == 0) {
        printf("0\n");
    } else {
        printf("%d\n", day);
    }

    return 0;
}
