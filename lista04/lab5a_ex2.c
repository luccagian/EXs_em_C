/* 
Escreva uma função em linguagem C chamada divisores que receba 
um valor inteiro 𝑛 ≥ 0 digitado pelo usuário e exiba na tela os divisores positivos 
de 𝑛. 
Algumas observações: 
1) Após a execução da função divisores, deve-se perguntar ao usuário do 
programa se ele deseja continuar ou não. Se o usuário desejar continuar 
então, neste caso, o programa deve solicitar que o usuário digite um novo 
valor inteiro para o cálculo de seus divisores positivos. 
2) Você deve incluir também em seu programa o protótipo da função divisores. 
*/

#include <stdio.h>

int divisores(int n){

    int div;

    printf("Os divisores de %d sao: \n",n);

    for(int i=1; i<=n; i++){

        if(n%i==0){

            printf("%d, ",i);

        }

    }

    return 0;
}

int main(){

    int n, div;
    int x;
    char opc;

    do{
        printf("Insira um numero inteiro maior que 0: ");
        scanf("%d", &n);

        if (n>0){

            div = divisores(n);

        } else {

            printf("Numero invalido!\n",x);

        }

        printf("\nDeseja continuar? s/n\n");
        scanf("%s", &opc);

    } while(opc == 's');

    if (opc == 'n'){

        printf("Fim do programa!\n");
        return 1;
    }

}
