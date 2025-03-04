#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int numero;
    int maior = 0;
    int menor = 0;

    while (numero >= 0)
    {
        printf("Digite números: ");
        scanf("%d", &numero);

        if (numero > maior)
        {
            maior = numero;
        }
        if (numero < menor)
        {
            menor = numero;
        }
    }
    printf("Maior = %d", maior);
    printf(" Menor = %d", menor);
}