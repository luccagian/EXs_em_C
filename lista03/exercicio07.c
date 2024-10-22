/*
Leia um número inteiro n estritamente positivo e calcule o fatorial de 
n
 */

#include <stdio.h>

int main()
{
    int n;
    int f=1;

    printf("Insira um numero positivo e inteiro: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        f *= i;
        
    }

    printf("o fatorial do numero %d eh: %d",n, f);
    
}  