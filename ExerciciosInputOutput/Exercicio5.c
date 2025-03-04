#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>
int main()
{
    char nome[30];
    int b;

    printf("Informe um nome: ");
    scanf("%15s", nome);

    for (b = 0; b <= 3; b++)
        printf("%c", nome[b]);

    system("PAUSE");
}