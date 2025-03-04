#include <stdio.h>
#include <string.h>

int main()
{

    char nome[] = "Carlos"; // Uma array de chars com calculo de tamanho automatico. O proprio compilador sabe o tamanho da String.
    char *nome1 = "Carlos"; // Nesse caso, estamos utilizando um ponteiro para alocar o valor dessa variavel num endereço da memória, infelizmente não podemos fazer operações para manipular essa string.

    // printf("%s", nome1); // Printa o valor alocado no memory address *nome

    strcat(nome, nome1);
    printf("%s", nome);

    char *nome = "Carlos";

    printf("%c", nome[0]); // Podemos utilizar o ponteiro como array por que também vai ser como se alocassemos a memoria igual num array.
}
