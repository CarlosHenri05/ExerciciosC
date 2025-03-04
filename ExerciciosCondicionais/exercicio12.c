#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("Divisivel por 2");
    }
    if (numero % 5 == 0)
    {
        printf(" Divisivel por 5");
    }
    if (numero % 10 == 0)
    {
        printf(" Divisivel por 10");
    }
    else
    {
        printf("Divisível por nenhum dos 3 numeros citados.");
    }
}