#include <stdio.h>

int main() {
    int H, P;
    scanf("%d %d", &H, &P);

    double r = (double)H / P;
    printf("%.2f\n", r);  // sempre imprime com duas casas decimais, incluindo zero à direita
    return 0;
}
