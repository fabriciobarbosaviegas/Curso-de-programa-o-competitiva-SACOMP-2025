#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALTURA 1000001  // altura máxima possível + 1

int main() {
    int n;
    scanf("%d", &n);

    int *b = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    int *flechas = calloc(MAX_ALTURA, sizeof(int));
    int c = 0;

    for (int i = 0; i < n; i++) {
        int altura = b[i];
        if (flechas[altura] > 0) {
            flechas[altura]--;               // Usa flecha existente
            flechas[altura - 1]++;           // Nova altura
        } else {
            c++;                             // Nova flecha lançada
            flechas[altura - 1]++;
        }
    }

    printf("%d\n", c);

    free(b);
    free(flechas);
    return 0;
}
