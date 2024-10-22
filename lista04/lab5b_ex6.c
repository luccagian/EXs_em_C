/* Gian Lucca - 10438361 */

#include <stdio.h>

#define TAM (10)

int comparar(int vetor[]) {
    int dif = 0;

    for (int i = 0; i < TAM; i++) {
        int rep = 0;

        for (int j = 0; j < i; j++) {
            if (vetor[i] == vetor[j]) {
                rep = 1;
                break;
            }
        }

        if (!rep) {
            dif++;
        }
    }
    return dif;
}

int main() {
    int vetor[TAM];
    int diferentes;

    printf("Digite 10 valores:\n");
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &vetor[i]);
    }

    diferentes = comparar(vetor);
    printf("Quantidade de valores diferentes: %d\n", diferentes);

    return 0;
}