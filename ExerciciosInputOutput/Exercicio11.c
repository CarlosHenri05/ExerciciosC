#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int cA = 0;
    int cE = 0;
    int cI = 0;
    int cO = 0;
    int cU = 0;
    int tam;

    char nome[30];

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    tam = strlen(nome);

    for (int i = 0; i < tam - 1; i++)
    {
        if (nome[i] == 'a' || nome[i] == 'A')
            cA++;

        if (nome[i] == 'i' || nome[i] == 'I')
            cI++;

        if (nome[i] == 'e' || nome[i] == 'E')
            cE++;
        if (nome[i] == 'o' || nome[i] == 'O')
            cO++;
        if (nome[i] == 'u' || nome[i] == 'U')
            cU++;
    }
    printf("\n\nA frase tem:\n");
    printf("\n%d letra a", cA);
    printf("\n%d letra e", cE);
    printf("\n%d letra i", cI);
    printf("\n%d letra o", cO);
    printf("\n%d letra u", cU);
    printf("\n\n");
}