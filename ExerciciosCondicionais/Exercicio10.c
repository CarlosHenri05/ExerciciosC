#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int numero;
    int soma;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        soma += numero;

    } while (numero > 0);

    printf("Soma: %d ", soma);
}