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

int intersecao(int A[], int B[]){
    printf("Elementos em comum entre os A e B:\n");
    for (int i = 0; i < TAM; i++){
        if (pertence(A[i], B, TAM)){
            printf("{%d, }", A[i]);
        } else{ 
            printf("{}");
        }
    }
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

    intersecao(A, B);

    return 0;
}