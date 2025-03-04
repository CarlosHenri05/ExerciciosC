#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    float salario;
    float prestacao;

    printf("Digite seu salário: ");
    scanf("%f", &salario);

    printf("Digite sua prestação: ");
    scanf("%f", &prestacao);

    int porcentagem = salario * 0.20;

    if (prestacao > porcentagem)
    {
        printf("não pode ser concedido.");
    }
    else
    {
        printf("pode ser concedido!");
    }
    return 0;
}