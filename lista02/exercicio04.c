#include <stdio.h>

int main()
{
    int a,b;
    float c;

    printf("Insira dois numeros inteiros. (x,y)");
    scanf("%d,%d", &a, &b);

    c = a + b; 
    printf("Soma = %.0f\n", c);
    c = (a+b)*1.0/2;
    printf("Média = %.2f",c);

    return 0;
}