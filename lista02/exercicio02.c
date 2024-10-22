/*
 Crie um programa que inicialize as seguintes variáveis:
• ‘evento’ com o valor igual a 5
• ‘corrida’ com o caractere “C”
• ‘tempo’ com o valor 27.25
A saída do programa deverá ser:
O tempo vitorioso na eliminatória C da competição 5 foi 27.25
*/

#include <stdio.h>

int main()
{
    int evento = 5;
    char corrida = 'C';
    float tempo = 27.25;

    printf("O tempo vitorioso na eliminatória %c da competição %d foi %.2f", corrida, evento, tempo);

    return 0;
}
