/* 
 Escreva uma função que recebe dois vetores inteiros A[] e B[], em 
seguida, a sua função imprime a UNIÃO entre os vetores, ou seja, os 
elementos do vetor A mais aos elementos do vetor B, 
desconsiderando os números repetidos de A em B. Os vetores dados 
não possuem valores duplicados e não estão ordenados.
*/

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
