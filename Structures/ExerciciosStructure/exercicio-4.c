#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void exibirGeneros(Bandas bandas[], int size)
{
    char style[30];
    printf("Digite um genêro de banda: ");
    scanf("%s", style);

    for (int i = 0; i < size; i++)
    {
        if (strcmp(bandas[i].genero, style))
        {
            printf("%s", bandas[i].nome);
        }
    }
}

void perguntarFavoritas(Bandas bandas[], int size)
{
    char bandaPergunta[30];

    printf("Digite o nome de uma banda e veremos se ela está nos favoritos ou não: ");
    scanf("%s", bandaPergunta);

    for (int i = 0; i < size; i++)
    {
        if (strcmp(bandas[i].nome, bandaPergunta) == 0)
        {
            printf("Sim, ela está nos favoritos");
            return;
        }
    }
    printf("A banda %s não está nos favoritos.", bandaPergunta);
}

int main()
{

    Bandas bandas[5];

    Bandas *ptr = bandas;

    int size = sizeof(bandas) / sizeof(bandas[0]);

    int preenchido = 0;
    int opcao;

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Preencher informações das bandas\n");
        printf("2. Listar todas as bandas\n");
        printf("3. Buscar por ranking\n");
        printf("4. Buscar por gênero\n");
        printf("5. Buscar por nome\n");
        printf("6. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            for (size_t i = 0; i < size; i++, ptr++)
            {
                printf("Fale o nome da sua banda favorita: ");
                scanf("%s", ptr->nome);

                printf("Digite o genêro da sua banda favorita: ");
                scanf("%s", ptr->genero);

                printf("Quantos integrantes a banda tem? ");
                scanf("%d", &ptr->numIntegrantes);

                printf("Em seu ranking pessoal, qual é o rank dela?");
                scanf("%d", &ptr->ranking);
            }
            preenchido = 1;
            break;
        case 2:
            if (!preenchido)
            {
                printf("Preencha as bandas primeiro.");
            }
            else
            {
                ptr = bandas;
                printf("Lista de bandas:\n ");
                for (int i = 0; i < size; i++)
                {
                    printf("Banda: %d %s Genero: %s numIntegrantes: %d Ranking: %d",
                           i + 1, ptr->nome, ptr->genero, ptr->numIntegrantes, ptr->ranking);
                }
            }

            break;
        case 3:
            if (!preenchido)
            {
                printf("Precisa preencher as bandas primeiro.");
            }
            else
            {
                perguntarRanking(bandas, size);
            }

            break;
        case 4:
            if (!preenchido)
            {
                printf("Precisa preencher as bandas primeiro.");
            }
            else
            {
                exibirGeneros(bandas, size);
            }

            break;

        case 5:
            if (!preenchido)
            {
                printf("Precisa preencher as bandas primeiro.");
            }
            else
            {
                perguntarFavoritas(bandas, size);
            }

            break;

        case 6:
            printf("Saindo do programa...");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
        }
    } while (opcao != 6);

    printf("\nLista de Bandas:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Banda %d: %s, Gênero: %s, Integrantes: %d, Ranking: %d\n",
               i + 1, ptr->nome, ptr->genero, ptr->numIntegrantes, ptr->ranking);
        ptr++;
    }

    perguntarRanking(bandas, size);

    exibirGeneros(bandas, size);

    perguntarFavoritas(bandas, size);
}
