#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int a, b;
    int soma;

    printf("Digite dois valores: ");
    scanf("%d %d", &a, &b);

    soma = a + b;

    if (soma > 10)
    {
        printf("Maior que 10, soma: %d", soma);
    }
    else
    {
        puts("Não é maior que 10;");
    }
}