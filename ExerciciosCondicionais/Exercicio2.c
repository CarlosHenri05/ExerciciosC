#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int a, b;

    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);

    int soma = a + b;

    if (soma > 10)
        printf("%d", soma);
}