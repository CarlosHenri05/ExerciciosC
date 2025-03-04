#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 20)
    {
        printf("Maior que 20!");
    }
    else if (numero == 20)
    {
        printf("Igual a 20!");
    }
    else
    {
        printf("Numero menor que 20");
    }
}