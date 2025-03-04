#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    char nome[30];
    char end[15];
    char telefone[15];

    printf("Digite seu nome: \n");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite seu endereço:  \n");
    fgets(end, sizeof(end), stdin);

    printf("Digite seu telefone: \n");
    fgets(telefone, sizeof(telefone), stdin);

    printf("%30s", nome);
    printf("%15s", end);
    printf("%15s", telefone);
}