#include <stdio.h>
#include <math.h>
int main () {
    int length[3];
    for (int i = 0; i < 3; i++) {
        scanf("%d", &length[i]);
    }

    if (length[0] > length[1] + length[2] || length[1] > length[0] + length[2] || length[2] > length[0] + length[1]) {
        printf("Not a triangle\n");
    }

    if (pow(length[0], 2) + pow(length[1], 2) == pow(length[2], 2) ||
        pow(length[0], 2) + pow(length[2], 2) == pow(length[1], 2) ||
        pow(length[1], 2) + pow(length[2], 2) == pow(length[0], 2)) {
            printf("Right triangle\n");
    }
    if (length[0] == length[1] || length[0] == length[2] || length[1] == length[2]) {
        printf("Isosceles triangle\n");
    }
    if (length[0] == length[1] && length[1] == length[2]) {
        printf("Equilateral triangle\n");
    }
    if (pow(length[0], 2) + pow(length[1], 2) > pow(length[2], 2) ||
        pow(length[0], 2) + pow(length[2], 2) > pow(length[1], 2) ||
        pow(length[1], 2) + pow(length[2], 2) > pow(length[0], 2)) {
            printf("Acute triangle\n");
    } else {
            printf("Obtuse triangle\n");
    }
}