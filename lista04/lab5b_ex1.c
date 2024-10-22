/* Gian Lucca - 10438361 */

#include <stdio.h>
#include <stdbool.h>

#define tam (5)

bool ordem(int vetor[]){
    for (int i = 0; i < tam - 1; i++){
        if (vetor[i] > vetor[i + 1]){
            return false; 
        }
    }
    return true;
}

int main() {
    int vetor[tam];

    printf("Digite os 5 valores do vetor:\n");
    for (int i = 0; i < tam; i++){
        scanf("%d", &vetor[i]);
    }

    if (ordem(vetor)){
        printf("O vetor esta em ordem crescente\n");
    } else {
        printf("O vetor esta em ordem decrescente\n");
    }

    return 0;
}