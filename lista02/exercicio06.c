/*
Escreva um programa para calcular a área de uma esfera. Seu programa deve declarar uma constante Pi 
de valor 3.141592. Para calcularmos a área da superfície da esfera utilizamos a seguinte fórmula:
A = 4 . π . r^2
*/

#include <stdio.h>

int main()
{
    float a, r, pi = 3.141592;

    printf("Insira o raio da esfera: ");
    scanf("%f", &r);

    a = 4*pi*(r*r);

    printf("A area da esfera é: %.2f", a);

    return 0;
}
