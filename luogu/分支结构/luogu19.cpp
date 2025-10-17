#include <stdio.h>
#include <math.h>
int main () {
    int T;
    float pi = 3.141593;
    if (T == 1){
        printf("I Love Luogu!");
}else if(T == 2){
    printf("6 4");
}else if(T == 3){
    printf("3 12 2");
}else if(T == 4){
    printf("%.6g", 500.0/3);
}else if(T == 5){
    printf("%d", 220/8);
}else if(T == 6){
    printf("%f", sqrt(6 * 6 + 9 * 9));
}else if(T == 7){
    printf("%d\n", 110);
    printf("%d\n", 90);
    printf("%d\n", 0);
}else if(T == 8){
    printf("%f\n", 2 * pi *5);
    printf("%f\n", pi * 5 * 5);
    printf("%f\n", 4/3 * pi * 5 * 5 * 5);
}else if(T == 9){
    printf("%d", 14);
}else if(T == 10){

}else if(T == 11){
    printf("%f", 100.0/3);
}else if(T == 12){
    printf("%c\n", "M");
    printf("%c\n", 65 + 18);
}else if(T == 13){
    float v_1 = 4 / 3 * pi * 4 * 4 * 4;
    float v_2 = 4 / 3 * pi * 10 * 10 * 10;
    printf("%d", pow(v_1 + v_2, 1.0/3));
}else if(T == 14){
    int rigon = 110, num = 10, money = rigon * num;
    if(money < 3500){
        rigon--;
        num++;
    }else{
        printf("%d\n", rigon);
    }
}
return 0;
}