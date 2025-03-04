#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    char nome[30];
    int i;

    printf("Digite um nome:");
    fgets(nome, sizeof(nome), stdin);
    for (i = 0; i <= 29; i++)
        if (i % 2 == 1)
        {
            printf("%c", nome[i]);
        }
}