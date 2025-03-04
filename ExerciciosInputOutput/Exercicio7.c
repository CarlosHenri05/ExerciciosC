#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    char nome[15];
    int i;

    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);

    for (i = 0; i < 11; i++)
    {
        printf("Nome: %15s; vez : %d", nome, i);
    }
}