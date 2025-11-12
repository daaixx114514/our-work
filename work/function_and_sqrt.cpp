#include <stdio.h>
#include <math.h>

float root1(float a, float b, float c) {
    float gen;
    gen = -b / (2 * a);
    return gen;
}

void root2(float a, float b, float c) {
    float real, imag;
    real = -b / (2 * a);
    imag = sqrt(- (b * b - 4 * a * c)) / (2 * a);
    printf("%.2f+%.2fi %.2f-%.2fi\n", real, imag, real, imag);
}

void root3(float a, float b, float c) {
    float gen1, gen2;
    gen1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    gen2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    printf("%.2f %.2f\n", gen1, gen2);
}

int main() {
    float a, b, c, delta, gen;
    scanf("%f %f %f", &a, &b, &c);
    delta = b * b - 4 * a * c;

    if (delta == 0) {
        gen = root1(a, b, c);
        printf("%.2f\n", gen);
    } else if (delta < 0) {
        root2(a, b, c);
    } else {
        root3(a, b, c);
    }

    return 0;
}
