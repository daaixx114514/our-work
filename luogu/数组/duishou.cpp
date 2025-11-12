#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    int S[N][3];
    int sum[N];
    for (int i = 0; i < N; i++) {
        scanf("%d%d%d", &S[i][0], &S[i][1], &S[i][2]);
    }
    for(int i = 0; i < N; i++) {
        sum[i] = S[i][0] + S[i][1] + S[i][2];
    }
    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int yuwen = abs(S[i][0] - S[j][0]);
            int shuxue = abs(S[i][1] - S[j][1]);
            int yinyu = abs(S[i][2] - S[j][2]);

            int diff = abs(sum[i] - sum[j]);

            if (yuwen <= 5 && shuxue <= 5 && yinyu <= 5 && diff <= 10) {
                count++;
            }
        }

    }
    printf("%d", count);

    return 0;
}