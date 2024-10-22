/* Gian Lucca - 10438361 */

#include <stdio.h>

#define TAM 5

int buscar(int vetor[], int x){
    for (int i = 0; i < TAM; i++){
        if (vetor[i] == x) {
            return i;
        }
    }
    return -1;
}

int main(){
    int vetor[TAM], x, pos;

    printf("Digite 5 numeros inteiros para o vetor:\n");
    for (int i = 0; i < TAM; i++){
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor que deseja buscar no vetor: ");
    scanf("%d", &x);

    pos = buscar(vetor, x);

    if (pos != -1){
        printf("O valor %d foi encontrado na posicao: %d\n", x, pos);
    } else {
        printf("O valor %d nao foi encontrado\n", x);
    }

    return 0;
}