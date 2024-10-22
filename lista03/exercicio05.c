/*
 Determine o faturamento médio que a loja obteve nestes dias
 */

#include <stdio.h>

int main()
{
    float d, r, x;

    printf("Insira o faturamento: ");

    for(int i=1; i<=4; i++)
    {
        printf("final de semana %d: ",i);
        scanf("%f", &d);
        x += d;

    }

    r = x /4;

    printf("media do faturamento: %.2f", r);
    
}   