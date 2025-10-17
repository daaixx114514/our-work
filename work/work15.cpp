#include <stdio.h>
int main () {
    float s;
    int count = 0;
    float sum = 0;
    while(1){
        scanf("%f", &s);
        if (s == -1)
            break;
        count++;
        sum += s;
    }
    double average = (double)sum / count;
    printf(" %.2f\n", average);
}