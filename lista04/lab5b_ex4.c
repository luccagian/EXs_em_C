/* Gian Lucca - 10438361 */

#include <stdio.h>
#include <stdbool.h>

#define TAM 5

int pertence(int elemento, int vetor[]) {
    for (int i = 0; i < TAM; i++) {
        if (vetor[i] == elemento) {
            return true;
        }
    }
    return false;
}

int diferenca(int A[], int B[]) {
    printf("Elementos que estão em A, mas não estão em B (A - B):\n");
    for (int i = 0; i < TAM; i++) {
        if (!pertence(A[i], B, TAM)) {
            printf("%d ", A[i]);
        }
    }
    printf("\n");
}

int main(){
    int A[TAM], B[TAM];

    printf("Digite os valores do vetor A:\n");
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite os valores do vetor B:\n");
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &B[i]);
    }

    diferenca(A, B);

    return 0;
}