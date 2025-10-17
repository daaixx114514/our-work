#include <stdio.h>
int main () {
    int n, pencil[3][2];
    scanf("%d", &n);

    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &pencil[i][j]);
        }
    }
    float num[3];
    for (int i = 0; i < 3; i++){
        num[i] = n / (float)pencil[i][0];
    }

    for (int i = 0; i < 3; i++){
        if ((float) num[i] - (int) num[i] != 0){
            num[i] = (int)num[i] + 1;
        }
    }

    int price[3];
    for (int i = 0; i < 3; i++){
        price[i] = pencil[i][1] * num[i];
    } 

    int min = price[0];
    for (int i = 0; i < 3; i++){
        if (price[i] < min){
            min = price[i];
        }
    }
    printf("%d\n", min);
    return 0;
}
    
    