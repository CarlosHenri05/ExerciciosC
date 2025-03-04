#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    char nome[30];
    int idade;
    char genero;

    char f = 'F';
    char m = 'M';

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu gênero: M para masculino e F para feminino: ");
    scanf(" %c", &genero);

    if (genero == f)
    {
        printf("Aceito");
    }
    else if (genero == m)
    {
        printf("Não aceito");
    }
    else
    {
        printf("Digite um dos genêros especificados.");
    }
}
