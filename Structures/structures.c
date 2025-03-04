#include <stdio.h>
#include <string.h>

/*Struct = coleção de membros relacionados("variaveis")
Podem ser de tipos de dado diferentes
Listado sobre um nome em um bloco de memória
Bem similar a classes em outras linguagens de programação    */

struct Player
{
    char name[12];
    int score;
};

int main()
{

    struct Player player1; // Como se fosse a instância de uma classe...
    struct Player player2;

    strcpy(player1.name, "Carlos");

    strcpy(player2.name, "Pedro");

    player1.score = 4;

    player2.score = 5;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);
}
