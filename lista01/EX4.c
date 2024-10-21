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