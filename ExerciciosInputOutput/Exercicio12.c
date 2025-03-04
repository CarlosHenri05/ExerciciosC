#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    char nome[30];
    int cont;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    for (int i = 0; i < strlen(nome); i++)
    {
        if (nome[i] == 'a' || nome[i] == 'A')
            cont++;
    }
    printf("A apareceu: %d vezes", cont);
}