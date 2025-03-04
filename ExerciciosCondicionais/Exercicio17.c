#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    double numero;

    printf("Digite seu numero: ");
    scanf("%lf", &numero);

    if (numero > 0)
    {
        printf("%lf", sqrt(numero));
    }
    else
    {
        printf("%lf", pow(numero, 2));
    }
}