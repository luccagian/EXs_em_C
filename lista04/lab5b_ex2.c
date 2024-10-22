/* 
Escreva uma função que recebe um vetor de TAM 5 e inverte seus 
valores.
*/

#include <stdio.h>

#define tam 5

int inverte(int v[]){
    int x;
    for (int i = 0; i < tam / 2; i++){
        x = v[i];
        v[i] = v[tam - i - 1];
        v[tam - i - 1] = x;
    }
}

int main(){
    int v[tam];

    printf("Insira 5 valores para o vetor V:\n");
    for (int i = 0; i < tam; i++){
        scanf("%d", &v[i]);
    }

    inverte(v);

    printf("o vetor V invertido e igual a:\n");
    for (int i = 0; i < tam; i++){
        printf("%d, ", v[i]);
    }

    return 0;
}
