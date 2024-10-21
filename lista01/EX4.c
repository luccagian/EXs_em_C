/*
Desenvolva um programa para calcular a hipotenusa de um triângulo retângulo.
Seu programa deverá:
• Solicitar os valores dos dois catetos do triângulo retângulo.
• Calcular o cateto utilizando a fórmula:
  ℎ𝑖𝑝𝑜𝑡𝑒𝑛𝑢𝑠𝑎^2 = 𝑐𝑎𝑡𝑒𝑡𝑜1^2 + 𝑐𝑎𝑡𝑒𝑡𝑜2^2
• Imprimir o resultado na tela do computador utilizando uma mensagem no formato:
Um triângulo retângulo com lados ___ e ___ tem uma hipotenusa igual a ____.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float cat1, cat2, hip;

    printf("Insira o do primeiro cateto: ");
    scanf("%f", &cat1 );

    printf("Insira o valor do segundo cateto: ");
    scanf("%f", &cat2 );
    
    hip = sqrt((cat1*cat1)+(cat2*cat2)) ;

    printf("Um triângulo retângulo com lados %.2f e %.2f tem uma hipotenusa igual a %.2f.", cat1, cat2, hip);

    return 0;

}
