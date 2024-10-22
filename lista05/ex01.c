/*
Manipulação de Caracteres e Códigos ASCII Desenvolva um programa que solicite ao usuário para inserir uma frase. 
O programa deve realizar as seguintes ações:

Exibir cada caractere da frase junto com seu respectivo valor na tabela ASCII.
Contar e exibir quantos caracteres são letras maiúsculas, minúsculas, dígitos numéricos e caracteres especiais.
Implementar uma função que converta todas as letras minúsculas em maiúsculas e exibir a frase resultante.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void invert(char *frase){
    for (int i = 0; frase[i] != '\n'; i++){
        frase[i] = toupper(frase[i]);
    }

}

int main(){
    int mins = 0;
    int mais = 0;
    int nume = 0;
    int espe = 0;
    char frase[255];

    puts("Insira uma frase: ");
    fgets(frase, sizeof(frase),stdin);
    printf("\n");

    for (int i = 0; frase[i] != '\n'; i++){
        printf("o caractere %c tem o valor de : %d\n",frase[i], frase[i]);

        if (isupper(frase[i])){
            mais++;
        } else if (islower(frase[i])){
            mins++;
        } else if (isdigit(frase[i])){
            nume++;
        } else if(!isspace(frase[i])){
            espe++;
        }
    }

    printf("\n\n");
    printf("letras minusculas: %d\n",mins);
    printf("letras maiusculas: %d\n",mais);
    printf("numeros: %d\n",nume);
    printf("caracteres especiais: %d\n",espe);

    invert(frase);
    printf("\n\n");
    printf("frase resultante: %s", frase);

    return 0;
}
