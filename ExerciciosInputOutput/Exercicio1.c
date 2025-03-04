#include <stdio.h>

// Atividade para perguntar um valor em metros e retornar esse valor em decimetros, centimetros e milimetros.
int main()
{
    int metros, decimetros, centimetros, milimetros;

    printf("Qual é o valor que desejas saber em dm,cm e mm?");
    scanf("%d", &metros);

    decimetros = metros * 10;
    centimetros = metros * 100;
    milimetros = metros * 1000;

    printf("O valor em decimetros é : %d", decimetros);
    printf("O valor em centimetros é : %d", centimetros);
    printf("O valor em milimetros é : %d", milimetros);
}