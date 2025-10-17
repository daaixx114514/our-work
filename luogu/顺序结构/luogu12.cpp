#include <stdio.h>
int main () {
    float water;
    int student;
    scanf("%f %d", &water, &student);
    float average = water / student;
    printf("%.3f\n", average);
    printf("%d", 2 * student);
    return 0;
}