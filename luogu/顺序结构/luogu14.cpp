#include <stdio.h>

int main() {
    int s, v;
    scanf("%d %d", &s, &v);

    int t = (s + v - 1) / v + 10; 
    int arrive = 8 * 60;           
    int leave = arrive - t;        

    if (leave < 0)                
        leave += 24 * 60;

    int hour = leave / 60;
    int minute = leave % 60;

    printf("%02d:%02d\n", hour, minute);
    return 0;
}
