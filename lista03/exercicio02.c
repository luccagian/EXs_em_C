/*
exiba os n primeiros números naturais 
ímpares
 */

#include <stdio.h>

int main()
{
    int n;

    printf("Insira um numero natural: ");
    scanf("%d", &n);

    printf("Numeros impares:\n");

    for(int i=1; i <=n; i++)
    {
        if( i % 2 == 1) 
        {
            printf("%d, ", i);
        }       
    } 
}   