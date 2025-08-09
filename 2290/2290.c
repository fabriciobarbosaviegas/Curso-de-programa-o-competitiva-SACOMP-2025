#include <stdio.h>

int main() {
    int N;
    while (1) {
        if (scanf("%d", &N) != 1) break;
        if (N == 0) break;

        long long xorsum = 0;
        long long nums[N];

        for (int i = 0; i < N; i++) {
            scanf("%lld", &nums[i]);
            xorsum ^= nums[i]; // XOR de todos
        }

        // Encontra um bit que seja diferente entre os dois números apaixonados
        long long mask = xorsum & (-xorsum);

        long long num1 = 0, num2 = 0;
        for (int i = 0; i < N; i++) {
            if (nums[i] & mask)
                num1 ^= nums[i];
            else
                num2 ^= nums[i];
        }

        // Ordena na hora de imprimir
        if (num1 < num2)
            printf("%lld %lld\n", num1, num2);
        else
            printf("%lld %lld\n", num2, num1);
    }
    return 0;
}
