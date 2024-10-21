/*
Desenvolva um programa para calcular o IMC (Índice de Massa Corporal) de uma pessoa. 
Seu programa deverá:
• Solicitar o peso da pessoa (em quilogramas).
• Solicitar a altura da pessoa (em metros).
• Calcular o IMC pela fórmula: 
𝐼𝑀𝐶 = 𝑝𝑒𝑠𝑜 / 𝑎𝑙𝑡𝑢𝑟𝑎^2
• Imprimir o resultado na tela do computador utilizando uma mensagem no formato:
O IMC de uma pessoa com peso __ kg e altura __ m é igual a ___.
*/

#include <stdio.h>

int main()
{
    float ind, pe, al;

    printf("Insira o peso em Kg: ");
    scanf("%f", &pe );

    printf("Insira a altura em metros: ");
    scanf("%f", &al );

    ind = pe/(al*al);

    printf("O IMC de uma pessoa com peso: %.2f kg e altura: %.2f m é igual a: %.2f.", pe, al, ind);

    return 0;

}
