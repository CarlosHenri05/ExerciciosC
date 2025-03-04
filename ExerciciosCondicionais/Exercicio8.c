#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int soma = 0;
    for (int i = 1; i <= 100; i++)
    {
        soma += i;
    }
    printf("%d", soma);
}