/*
Escreva um programa em C que solicite que o usuário forneça dois números 
inteiros e imprima o resultado da soma, subtração, multiplicação e divisão 
inteira desses números.
*/

#include <stdio.h>

int main()
{
    int a , b;
    float c;

    printf("Escreva dois números inteiros!(x,y)");
    scanf("%d,%d", &a ,&b);

    c = a + b;
    printf("Soma = %.0f\n", c);

    c = a - b;
    printf("Subtração = %.0f\n", c);

    c = a * b;
    printf("Multiplicação = %.0f\n", c);

    c = a / b;
    printf("Divisão = %.2f\n", c);

    return 0;

}
