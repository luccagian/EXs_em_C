#include <stdio.h>

int main()
{
    float F, C;

    printf("Insira a temperatura em Celsius: ");
    scanf("%f", &C );

    F = (9/5) * C + 32;

    printf("Uma temperatura de %.2f graus Celsius equivale a %.2f graus Fahrenheit.", C, F);

    return 0;

}