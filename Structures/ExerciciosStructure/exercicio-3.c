#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[30];
    char genero[30];
    int numIntegrantes;
    int ranking;

} Banda;

int main()
{

    Banda minhaBanda = {"Led Zepellin", "Rock", 5, 1};
    Banda bandaPedro = {"AC/DC", "Rock", 3, 2};

    printf("%s\n", minhaBanda.nome);
    printf("%s\n", minhaBanda.genero);
    printf("%d\n", minhaBanda.numIntegrantes);
    printf("%d", minhaBanda.ranking);
}
