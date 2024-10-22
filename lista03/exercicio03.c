/*
Exiba a quantidade de dias 
com temperatura média abaixo de zero graus Celsius
 */

#include <stdio.h>

int main()
{
    float t;
    int z;

    printf("Insira as temperaturas medias: ");

    for(int i=1; i<=7; i++)
    {
           printf("Dia %d: ",i);
           scanf("%f", &t);
           
           if (t < 0)
            z++;
    }

    printf("Dias abaixo de zero graus: %d", z);

}   