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