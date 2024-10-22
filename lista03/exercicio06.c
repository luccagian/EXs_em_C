/*
calcule a soma dos 
números pares existentes entre 0 e n
 */

#include <stdio.h>

int main()
{
    int n, s;

    printf("Insira um numero positivo e inteiro: ");
    scanf("%d", &n);

    for(int i=0; i<=n; i=i+2)
    {
        s += i;
        
    }

    printf("somas dos numeros pares ate n: %d", s);
    
}   