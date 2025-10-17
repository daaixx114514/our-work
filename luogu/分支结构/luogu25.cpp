#include <stdio.h>
int main () {
    float weight, height;
    scanf("%f %f", &weight, &height);
    float BMI = weight / (height * height);
    if (BMI < 18.5) {
        printf("Underweight");
    }else if (BMI < 24) {
        printf("Normal");
    }if (BMI >= 24) {
        printf("%.6g\n", BMI);
        printf("Overweight");
    } else {}
    return 0;
}