#include <stdio.h>
int main () {
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n], countA = 0, countB = 0, sumA = 0, sumB = 0;

    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        if (a[i]%k == 0){
            sumA += a[i];
            countA++;
        }else{
            sumB += a[i];
            countB++;
        }
   }

   double avgA = (double)sumA / countA;
   double avgB = (double)sumB / countB;

   printf("%.1f %.1f\n", avgA, avgB);

    return 0;
}