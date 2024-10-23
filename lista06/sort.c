/*
Para esta atividade você deve implementar os 3 algoritmos de ordenação estudados em sala. 
Eles já foram apresentados pelo professor de teoria.
Com os 3 algoritmos implementados em funções diferentes, chegou a hora de medir o desempenho.

Crie na função principal com 3 vetores de teste:

melhor caso: quando a lista está ordenada.

pior caso: quando a lista está em ordem inversa.

caso intermediário: uma lista com elementos em ordem aleatória

Chame cada um dos métodos de ordenação para os 3 casos e meça o tempo que levou para ordenar.
Para isso utilize a biblioteca time.h, com ela você consegue obter o tempo atual em segundo se estudar o método clock(). 

A saída do seu programa deve ser:

Buble Sort
- melhor caso:  X segundos
- pior caso: Y segundos
- caso intermediário: Z segundos

Selection Sort
- melhor caso:  X segundos
- pior caso: Y segundos
- caso intermediário: Z segundos

Insertion Sort
- melhor caso:  X segundos
- pior caso: Y segundos
- caso intermediário: Z segundos
Sendo x, y e z valores em segundos para cada caso testado. Lembre-se de testar cada algoritmo na mesma condição de entrada.
*/
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

#define N 100

void bubble(){
    clock_t inicio, fim;
    double temp;
    int aux;

    int melhorCaso[100];
    for (int i = 0; i < 100; i++) {
        melhorCaso[i] = i + 1;
    }

    int piorCaso[100];
    for (int i = 0; i < 100; i++) {
        piorCaso[i] = 100 - i;
    }

    int casoIntermediario[100] = {
        10, 5, 95, 23, 47, 12, 73, 8, 99, 30, 
        67, 54, 41, 76, 65, 31, 60, 82, 25, 91, 
        38, 14, 29, 72, 80, 17, 52, 45, 6, 93, 
        40, 20, 79, 84, 36, 50, 18, 64, 56, 89, 
        24, 4, 70, 63, 85, 43, 58, 27, 9, 74, 
        37, 13, 92, 32, 44, 49, 77, 53, 98, 2, 
        61, 33, 81, 26, 66, 83, 3, 16, 35, 96, 
        11, 62, 68, 19, 46, 90, 7, 57, 28, 97, 
        1, 22, 71, 48, 87, 21, 59, 34, 94, 39, 
        15, 42, 75, 86, 55, 78, 51, 88, 19, 100
    };

    printf("Bubble Sort\n");

    inicio = clock();

    for (int i = 0; i < (N - 1); i++){
        for (int j = 0; j < (N - i - 1); j++){
            if (melhorCaso[j] > melhorCaso[j+1]){
                aux = melhorCaso[j];
                melhorCaso[j] = melhorCaso[j+1];
                melhorCaso[j+1] = aux;
            }
        }
    }

    fim = clock();

    temp = (double)(fim - inicio)/CLOCKS_PER_SEC;

    printf("- melhor caso: %lf segundos\n", temp);

    inicio = clock();

    for (int i = 0; i < (N - 1); i++){
        for (int j = 0; j < (N - i - 1); j++){
            if (piorCaso[j] > piorCaso[j+1]){
                aux = piorCaso[j];
                piorCaso[j] = piorCaso[j+1];
                piorCaso[j+1] = aux;
            }
        }
    }

    fim = clock();

    temp = (double)(fim - inicio)/CLOCKS_PER_SEC;

    printf("- pior caso: %lf segundos\n", temp);

    inicio = clock();

    for (int i = 0; i < (N - 1); i++){
        for (int j = 0; j < (N - i - 1); j++){
            if (casoIntermediario[j] > casoIntermediario[j+1]){
                aux = casoIntermediario[j];
                casoIntermediario[j] = casoIntermediario[j+1];
                casoIntermediario[j+1] = aux;
            }
        }
    }

    fim = clock();

    temp = (double)(fim - inicio)/CLOCKS_PER_SEC;

    printf("- caso intermediario: %lf segundos\n", temp);
    printf("\n");
}

void selection() {
    clock_t inicio, fim;
    double temp;
    int min, aux;

    int melhorCaso[100];
    for (int i = 0; i < 100; i++) {
        melhorCaso[i] = i + 1;
    }

    int piorCaso[100];
    for (int i = 0; i < 100; i++) {
        piorCaso[i] = 100 - i;
    }

    int casoIntermediario[100] = {
        10, 5, 95, 23, 47, 12, 73, 8, 99, 30, 
        67, 54, 41, 76, 65, 31, 60, 82, 25, 91, 
        38, 14, 29, 72, 80, 17, 52, 45, 6, 93, 
        40, 20, 79, 84, 36, 50, 18, 64, 56, 89, 
        24, 4, 70, 63, 85, 43, 58, 27, 9, 74, 
        37, 13, 92, 32, 44, 49, 77, 53, 98, 2, 
        61, 33, 81, 26, 66, 83, 3, 16, 35, 96, 
        11, 62, 68, 19, 46, 90, 7, 57, 28, 97, 
        1, 22, 71, 48, 87, 21, 59, 34, 94, 39, 
        15, 42, 75, 86, 55, 78, 51, 88, 19, 100
    };

    printf("Selection Sort\n");

    inicio = clock();

    for (int i = 0; i < N - 1; i++) {
        min = i;
        for (int j = i + 1; j < N; j++) {
            if (melhorCaso[j] < melhorCaso[min]) {
                min = j;
            }
        }
        if (min != i) {
            aux = melhorCaso[i];
            melhorCaso[i] = melhorCaso[min];
            melhorCaso[min] = aux;
        }
    }

    fim = clock();

    temp = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("- melhor caso: %lf segundos\n", temp);

    inicio = clock();

    for (int i = 0; i < N - 1; i++) {
        min = i;
        for (int j = i + 1; j < N; j++) {
            if (piorCaso[j] < piorCaso[min]) {
                min = j;
            }
        }
        if (min != i) {
            aux = piorCaso[i];
            piorCaso[i] = piorCaso[min];
            piorCaso[min] = aux;
        }
    }

    fim = clock();

    temp = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("- pior caso: %lf segundos\n", temp);

    inicio = clock();

    for (int i = 0; i < N - 1; i++) {
        min = i;
        for (int j = i + 1; j < N; j++) {
            if (casoIntermediario[j] < casoIntermediario[min]) {
                min = j;
            }
        }

        if (min != i) {
            aux = casoIntermediario[i];
            casoIntermediario[i] = casoIntermediario[min];
            casoIntermediario[min] = aux;
        }
    }
    fim = clock();

    temp = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("- caso intermediario: %lf segundos\n", temp);
    printf("\n");
}

void insertion(){
    clock_t inicio, fim;
    double temp;
    int elem;
    bool encontrou;

    int melhorCaso[100];
    for (int i = 0; i < 100; i++) {
        melhorCaso[i] = i + 1;
    }

    int piorCaso[100];
    for (int i = 0; i < 100; i++) {
        piorCaso[i] = 100 - i;
    }

    int casoIntermediario[100] = {
        10, 5, 95, 23, 47, 12, 73, 8, 99, 30, 
        67, 54, 41, 76, 65, 31, 60, 82, 25, 91, 
        38, 14, 29, 72, 80, 17, 52, 45, 6, 93, 
        40, 20, 79, 84, 36, 50, 18, 64, 56, 89, 
        24, 4, 70, 63, 85, 43, 58, 27, 9, 74, 
        37, 13, 92, 32, 44, 49, 77, 53, 98, 2, 
        61, 33, 81, 26, 66, 83, 3, 16, 35, 96, 
        11, 62, 68, 19, 46, 90, 7, 57, 28, 97, 
        1, 22, 71, 48, 87, 21, 59, 34, 94, 39, 
        15, 42, 75, 86, 55, 78, 51, 88, 19, 100
    };

    printf("Insertion Sort\n");

    inicio = clock();

    for (int i = 1; i < N; i++) {
        elem = melhorCaso[i];
        encontrou = false;
        int j = (i - 1);
        while (j >= 0 && !encontrou) {       
            if (melhorCaso[j] > elem) {     
            melhorCaso[j+1] = melhorCaso[j];
            j--;
            }      
            else {
                encontrou = true;
            }
         
        }   
        melhorCaso[j+1] = elem;
    }

    fim = clock();

    temp = (double)(fim - inicio)/CLOCKS_PER_SEC;

    printf("- melhor caso: %lf segundos\n", temp);

    inicio = clock();

    for (int i = 1; i < N; i++) {
        elem = piorCaso[i];
        encontrou = false;
        int j = (i - 1); 
        while (j >= 0 && !encontrou) {       
            if (piorCaso[j] > elem) {     
            piorCaso[j+1] = piorCaso[j];
            j--;
            }      
            else {
                encontrou = true;
            }
        }    
        piorCaso[j+1] = elem;
    }

    fim = clock();

    temp = (double)(fim - inicio)/CLOCKS_PER_SEC;

    printf("- pior caso: %lf segundos\n", temp);

    inicio = clock();

    for (int i = 1; i < N; i++) {
        elem = casoIntermediario[i];
        encontrou = false;
        int j = (i - 1);
        while (j >= 0 && !encontrou) {       
            if (casoIntermediario[j] > elem) {     
            casoIntermediario[j+1] = casoIntermediario[j];
            j--;
            }   
            else {
                encontrou = true;
            }
        }    
        casoIntermediario[j+1] = elem;
    }

    fim = clock();

    temp = (double)(fim - inicio)/CLOCKS_PER_SEC;

    printf("- caso intermediario: %lf segundos\n", temp);

}

int main(){

    bubble();
    selection();
    insertion();

    return 0;
}
