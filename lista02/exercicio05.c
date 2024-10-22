/*
Escreva um programa que converte uma temperatura Celsius em Fahrenheit.
Exemplo de saída:
‘Digite a temperatura em graus Celsius: 21
A Temperatura em graus Fahrenheit é 69.80’
*/

#include <stdio.h>

int main()
{
    float c,f;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &c);

    f = (c * 9/5) + 32;

    printf("A Temperatura em graus Fahrenheit é: %.2f", f);

    return 0;
}
