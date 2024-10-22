/* 
Escreva uma função em C chamada 𝑓𝑖𝑏𝑜𝑛𝑎𝑐𝑐𝑖 que recebe um valor inteiro 𝑛 ≥ 1 e 
revolve o 𝑛 − é𝑠𝑖𝑚𝑜 termo da sequência de Fibonacci. 
Exemplo. Se𝑛 = 6, 𝑓𝑖𝑏𝑜𝑛𝑛𝑎𝑐𝑐𝑖(6) = 8
*/

#include <stdio.h>

int fibonnacci(int n){

    int a = 0; 
    int b = 1;
    int x;

    if (n == 1){

        printf("%d numero da sequencia = %d\n", n,a);
        return 0;
    }

    for (int i=2;i<=n;i++){

        x = a + b;
        a = b;
        b = x;

    }

    printf("%d numero da sequencia = %d\n", n,x);
    return 0;

}

int main(){

    int n, fib;
    char opc;

    do{
        printf("Insira um numero inteiro maior ou igual a 1: ");
        scanf("%d", &n);

        if (n>=1){

            fib = fibonnacci(n);

        } else {

            printf("Numero invalido!\n");

        }

        printf("\nDeseja continuar? s/n\n");
        scanf("%s", &opc);

    } while(opc == 's');

    if (opc == 'n'){

        printf("Fim do programa!\n");
        return 1;
    }

}
