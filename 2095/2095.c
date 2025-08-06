#include <stdio.h>
#include <stdlib.h>

// Função de comparação para qsort (ordem crescente)
int cmp(const void *a, const void *b) {
    int x = *(int*)a;
    int y = *(int*)b;
    return (x > y) - (x < y); // equivalente a: return x - y; mas sem overflow
}

int main() {
    int S;
    scanf("%d", &S);

    int Q[S], N[S];

    for (int i = 0; i < S; i++) {
        scanf("%d", &Q[i]);
    }

    for (int i = 0; i < S; i++) {
        scanf("%d", &N[i]);
    }

    // Ordenar os dois vetores
    qsort(Q, S, sizeof(int), cmp);
    qsort(N, S, sizeof(int), cmp);

    int i = 0, j = 0, w = 0;

    // Estratégia gulosa com dois ponteiros
    while (i < S && j < S) {
        if (N[j] > Q[i]) {
            w++;
            i++;
        }
        j++;
    }

    printf("%d\n", w);
    return 0;
}
