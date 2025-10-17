#include <stdio.h>
int main () {
    int num;
    float money;
    scanf("%d", &num);

    if (num <= 150){
        money = num * 0.4463;
    }else if (num > 150 && num <= 400) {
        money = 150 * 0.4463 + (num - 150) * 0.4663;
    }else {
     money = 150 * 0.4463 + 250 * 0.4663 + (num - 400) * 0.5663;
    }
printf("%.1f\n", money);
return 0;
}