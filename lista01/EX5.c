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