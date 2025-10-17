#include <stdio.h>
int main () {
    int m, A = 0, U = 0, B = 0, S = 0;
    scanf("%d", &m);
    int P1 = (m%2 == 0);
    int P2 = (m > 4 && m <= 12);

    if (P1 && P2) {
        A++;
    }if (P1 || P2){
        U++;
    }if ((P1 && !P2)||(!P1 && P2)){
        B++;
    }if (!P1 && !P2){
        S++;
    }
    printf("%d %d %d %d", A, U, B, S);
    return 0;
}