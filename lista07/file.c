/*
Você deverá criar um programa em linguagem C que leia uma lista de números inteiros a partir de um arquivo de entrada, 
ordene os números em ordem crescente e escreva o resultado em um novo arquivo de saída.
*/

#include <stdio.h>

void bubble(int cont,int vet[]){

    int aux;

    for (int i = 0; i < (cont - 1); i++){
        for (int j = 0; j < (cont - i - 1); j++){
            if (vet[j] > vet[j+1]){
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
                }
            }
        }
}

int main(){

    int cont = 0;
    int n;
    int vet[100];

    const char *arq1 = "entrada.txt";
    FILE *entrada = fopen(arq1, "r");

    if (entrada == NULL){
        printf("Erro ao ler o arquivo '%s'!\n", arq1);
        return 1;
    }

    printf("Arquivo '%s' aberto com sucesso!\n", arq1);

    while (fscanf(entrada, "%d", &n) == 1 && cont < 100){

        vet[cont++] = n;
    }
        fclose(entrada);

    printf("Arquivo '%s' fechado com sucesso!\n", arq1);

    bubble(cont,vet); 

    const char *arq2 = "saida.txt";
    FILE *saida = fopen(arq2, "w");

    if (saida == NULL){
        printf("Erro ao abrir o arquivo '%s'!\n", arq2);
        return 1;
    }

    printf("Arquivo '%s' aberto com sucesso!\n", arq2);

    for (int i = 0; i < cont; i++){
        fprintf(saida, "%d\n", vet[i]);
    }
    
    fclose(saida);

    printf("Arquivo '%s' fechado com sucesso!\n", arq2);
    
    return 0;
}
