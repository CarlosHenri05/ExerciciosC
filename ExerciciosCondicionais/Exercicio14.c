#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int idade;

    printf("Digite sua idade:");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Pode votar");
    }
    else
    {
        printf("Não pode votar");
    }
}