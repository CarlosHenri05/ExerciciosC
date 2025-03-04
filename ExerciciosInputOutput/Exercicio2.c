#include <stdio.h>

#define TAM 10

int main()
{
    int tabuada[TAM][TAM];

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            tabuada[i][j] = (i + 1) * (j + 1);
            printf("%4d", tabuada[i][j]);
        }
    }
    printf("\n");
}