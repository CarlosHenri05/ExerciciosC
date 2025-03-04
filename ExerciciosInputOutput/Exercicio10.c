#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    char nome[30];
    char nomeNovo[6];

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    for (int i = 1; i <= sizeof(nomeNovo); i++)
    {
        nomeNovo[i] = nome[i];
        printf("%d", i);
    }
}