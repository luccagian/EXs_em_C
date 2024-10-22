/*
decida se n 
é perfeito.

Exemplo: 6 é perfeito, pois 1 + 2 + 3 = 6.
 */

#include <stdio.h>

int main()
{
    int n, x;

    printf("Insira um numero positivo e inteiro: ");
    scanf("%d", &n);

    for(int i=1; i<n; i++)
    {
        if(n%i == 0 || n%1 == n)
        {   
            x += i;
        }
    }   

    if (n != x)
    {
        printf("esse numero nao eh perfeito");
    }

    else
    {
        printf("esse numero eh perfeito");
    } 
}  