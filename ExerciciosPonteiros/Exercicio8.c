#include <stdio.h>

int main()
{
    float matriz[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("&numeros[%d][%d] = %p", i, j, (void *)&matriz[i][j]);
        }
    }
}