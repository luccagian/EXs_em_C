/* Gian Lucca - 10438361 */

#include <stdio.h>
#include <stdbool.h>

#define TAM 5

int pertence(int elemento, int vetor[]){
    for (int i = 0; i < TAM; i++){
        if (vetor[i] == elemento){
            return true;

        }
    }
    return false;

}

int uniao(int A[], int B[]){
    int uniaoVetor[2 * TAM];
    int tamanhoUniao = 0;

    for (int i = 0; i < TAM; i++){
        uniaoVetor[tamanhoUniao] = A[i];
        tamanhoUniao++;

    }

    for (int i = 0; i < TAM; i++) {
        if (!pertence(B[i], A, TAM)){
            uniaoVetor[tamanhoUniao] = B[i];
            tamanhoUniao++;
        }
    }

    printf("União dos vetores A e B:\n");
    for (int i = 0; i < tamanhoUniao; i++){
        printf("%d ", uniaoVetor[i]);

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

    uniao(A, B);

    return 0;
}