#include <stdio.h>
int main(){
    int k;
    int n = 0;
    scanf("%d", &k);
    double Sn = 0.0f;
    while (Sn <= k){
        n++;
        Sn += 1.0/n;
    }
    printf("%d", n);
    return 0;
}