#include <stdio.h>
int main () {
    int week_day, day, allday;
    scanf("%d %d", &week_day, &day);

    int week = day / 7;
    int other = day % 7;
    int last = 7 - other;
    if (other > last) {
        allday = 5 * week + other - 2;
    } else {
        allday = 5 * week + other;
    }
    printf("%d\n", allday * 250);
    return 0;
}