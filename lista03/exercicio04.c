/*
Calcule a potência x^n
 */

#include <stdio.h>

int main()
{
    int n, x;
    int p=1;

    printf("Insira um numero: ");
    scanf("%d", &x);

    printf("Insira um numero maior que zero: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        p *=x;
    }

    printf("Resultado da potencia: %d", p);
    
}   