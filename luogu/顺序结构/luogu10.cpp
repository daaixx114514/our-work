#include <stdio.h>
int main () {
    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, b;
    int i = 0;
    scanf("%d%d%d%d%d%d%d%d%d%d%d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &b);
    if (b >= a1 || (b+30) >= a1){i++;}
    if (b >= a2 || (b+30) >= a2){i++;}
    if (b >= a3 || (b+30) >= a3){i++;}
    if (b >= a4 || (b+30) >= a4){i++;}
    if (b >= a5 || (b+30) >= a5){i++;}
    if (b >= a6 || (b+30) >= a6){i++;}
    if (b >= a7 || (b+30) >= a7){i++;}
    if (b >= a8 || (b+30) >= a8){i++;}
    if (b >= a9 || (b+30) >= a9){i++;}
    if (b >= a10 || (b+30) >= a10){i++;}
    printf("%d\n", i);
    return 0;
}