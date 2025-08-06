#include <stdio.h>
#include <stdlib.h>

#define MAX_T 2001
#define MAX_N 1000

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int N, T;
    scanf("%d %d", &N, &T);

    int C[MAX_N];
    int V[MAX_N];
    int dp[MAX_T] = {0};  // dp[j] é o valor máximo para comprimento j

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &C[i], &V[i]);
    }

    for (int j = 1; j <= T; j++) {
        for (int i = 0; i < N; i++) {
            if (C[i] <= j) {
                dp[j] = max(dp[j], dp[j - C[i]] + V[i]);
            }
        }
    }

    printf("%d\n", dp[T]);
    return 0;
}
