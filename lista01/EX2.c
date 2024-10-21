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