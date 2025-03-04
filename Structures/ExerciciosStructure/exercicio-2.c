#include <stdio.h>
#include <string.h>

struct Dados
{
    char nome[30];
    int idade;
    char endereco[30];
};

int main()
{
    char nome[30];
    int idade;
    char endereco[30];

    printf("Digite seu nome:\n ");
    scanf("%30s", nome);

    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    printf("Digite seu endereço:\n");
    scanf("%30s", endereco);

    struct Dados dados;

    strcpy(dados.nome, nome);

    dados.idade = idade;

    strcpy(dados.endereco, endereco);

    printf("%s\n", dados.nome);
    printf("%d\n", dados.idade);
    printf("%s\n", dados.endereco);
}
