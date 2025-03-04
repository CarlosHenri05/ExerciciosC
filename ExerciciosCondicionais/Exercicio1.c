#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    float numero;

    printf("Digite um número: ");
    scanf("%f", &numero);

    if (numero > 20)
        printf("%f", numero / 2);
}