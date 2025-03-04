#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[30];
    char genero[30];
    int numIntegrantes;
    int ranking;
} Bandas;

void perguntarRanking(Bandas bandas[], int size)
{
    int rank;

    printf("Digite um número de 1 até 5:");
    scanf("%d", &rank);

    if (rank < 1 || rank > 5)
    {
        printf("Type a valid number.");
    }
    for (int i = 0; i < size; i++)
    {
        if (bandas[i].ranking == rank)
        {
            printf("\nBanda no ranking %d:\n", rank);
            printf("Nome: %s\n", bandas[i].nome);
            printf("Gênero: %s\n", bandas[i].genero);
            printf("Número de integrantes: %d\n", bandas[i].numIntegrantes);
        }
    }
}

int main()
{

    Bandas bandas[5];

    Bandas *ptr = bandas;

    int size = sizeof(bandas) / sizeof(bandas[0]);

    int i = 0;

    while (i < 5)
    {
        printf("Fale o nome da sua banda favorita: ");
        scanf("%s", ptr->nome);

        printf("Digite o genêro da sua banda favorita: ");
        scanf("%s", ptr->genero);

        printf("Quantos integrantes a banda tem? ");
        scanf("%d", &ptr->numIntegrantes);

        printf("Em seu ranking pessoal, qual é o rank dela?");
        scanf("%d", &ptr->ranking);

        ptr++;
        i++;
    }

    ptr = bandas;

    printf("\nLista de Bandas:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Banda %d: %s, Gênero: %s, Integrantes: %d, Ranking: %d\n",
               i + 1, ptr->nome, ptr->genero, ptr->numIntegrantes, ptr->ranking);
        ptr++;
    }

    perguntarRanking(bandas, size);
}