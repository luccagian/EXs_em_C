/* Gian Lucca - 10438361 */

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