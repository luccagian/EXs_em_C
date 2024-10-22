/* Gian Lucca - 10438361 */

#include <stdio.h>

int fatorial(int n){

    int fat=1;

    for(int i=1; i<=n; i++){

        fat *= i;
    }

    return fat;
}

int main(){

    int n, fat;
    int x;
    char opc;

    do{
        printf("Insira um numero inteiro maior que 0: ");
        scanf("%d", &n);

        if (n>0){

            fat = fatorial(n);
            printf("Fatorial de %d eh: %d\n",n,fat);
        } else {

            x++;
            printf("Digite um numero valido! %d/3\n\n",x);

        }

        if (x == 3){

            printf("Numero de tentativas excedeu o limite! Tente mais tarde\n\n");
            return 1;
        }

        printf("Deseja continuar? s/n\n");
        scanf("%s", &opc);

    } while(opc == 's');

    if (opc == 'n'){

        printf("O programa se encerrou!\n");
        return 1;
    }

}