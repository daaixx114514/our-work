#include <stdio.h>

int main() {
    float a;
    scanf("%f", &a);
    int int_part = (int)a;
    int frac_part = (int)((a - int_part) * 1000); 
    int ge = int_part % 10;
    int shi = (int_part / 10) % 10;
    int bai = (int_part / 100) % 10;
    int qian = frac_part / 100;
    int bai_frac = (frac_part / 10) % 10;
    int shi_frac = frac_part % 10;
    float b = ge * 0.001 + shi * 0.01 + bai * 0.1 + qian + bai_frac * 0.01 + shi_frac * 0.001;
    printf("%.3f\n", b);

    return 0;
}
