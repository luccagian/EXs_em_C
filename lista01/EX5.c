/*
Desenvolva um programa para calcular a área de um círculo.
Seu programa deverá:
• Solicitar o raio do círculo.
• Calcular a área do círculo utilizando a fórmula:
r𝑎𝑖𝑜 = 𝜋𝑅^2
• Imprimir o resultado na tela do computador utilizando uma mensagem no formato:
Um círculo com raio ____ tem área igual a _______.
*/

#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    float A, R;

    printf("Insira o raio do círculo: ");
    scanf("%f", &R);

    A = M_PI * (R*R);

    printf("Um círculo com raio %.2f tem área igual a %.2f.", R, A);

    return 0;

}
