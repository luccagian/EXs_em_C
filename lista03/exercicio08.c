/*
Exiba os n 
primeiros números naturais que são múltiplos de x ou de y ou de ambos.
 */

#include <stdio.h>

int main()
{
    int n,x,y;

    printf("Insira a sequencia  de numeros: ");
    scanf("%d", &n);

    printf("Insira dois numeros positivos e inteiros (x,y): ");
    scanf("%d,%d",&x ,&y);

    printf("multiplos: ");

    for(int i=2; i<=n; i++)
    {
        if(x%i == 0 || y%i == 0)
        {
            printf("%d, ",i);
        }   
    } 
}  