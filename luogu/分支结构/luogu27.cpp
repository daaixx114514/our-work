#include <stdio.h>
int main () {
    int year, month, day;
    scanf("%d %d", &year, &month);
    int P1 = (year % 4 == 0);
    int P2 = (year % 100 != 0);
    int P3 = (year % 400 == 0);
    int P4 = (P1 && (P2 || P3));

    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (P4) {
        days[2] = 29;
    }
    printf("%d", days[month]);
    return 0;
}
