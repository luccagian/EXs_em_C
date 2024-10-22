/*
calcule a soma dos n primeiros números 
naturais
 */

#include <stdio.h>

int main()
{
    int n;
    int soma = 0;

    printf("Insira um numero natural: ");
    scanf("%d", &n);

    for(int i=1; i <=n; i++)
    {
        soma += i; 
    }

    printf("A soma dos n primeiros numeros de %d eh: %d",n,soma );
}