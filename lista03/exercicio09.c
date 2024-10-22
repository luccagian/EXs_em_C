/*
Leia um número inteiro p e verifique se ele é primo. 
 */

#include <stdio.h>

int main()
{
    int p, x;

    printf("Insira um numero inteiro: ");
    scanf("%d", &p);

    for(int i=1; i<=p; i++)
    {
        if(p%i == 0)
        {   
            x += 1;
        }
    }   

    if (x > 2)
    {
        printf("esse numero nao eh primo");
    }

    else
    {
        printf("esse numero eh primo");
    } 
}  