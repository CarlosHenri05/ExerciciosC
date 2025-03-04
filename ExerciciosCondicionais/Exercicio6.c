#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int anoNasci;
    int anoAtual;
    int idade;

    printf("Digite o seu ano de nascimento :");
    scanf("%d", &anoNasci);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNasci;

    printf("Então a sua idade é: %d", idade);
}