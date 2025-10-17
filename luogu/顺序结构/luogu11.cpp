#include <stdio.h>

int main() {
    float a;
    scanf("%f", &a);

    int integer = (int)a;
    int ge = integer % 10;
    int shi = (integer / 10) % 10;
    int bai = (integer / 100) % 10;
    int shifen = ((int)(a * 10)) % 10;

    float transnum = shifen + ge * 0.1 + shi * 0.01 + bai * 0.001;
    printf("%.3f\n", transnum);

    return 0;
}
