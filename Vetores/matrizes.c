#include <stdio.h>

int main()
{

    int matriz[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}}; // Array de arrays, ou seja: por exemplo, o valor matriz[0][1] é referente ao array que esta na posição 0 e o número que está na posição 1.

    printf("%d", matriz[0][1]); // Irá printar o número 2

    // Como percorrer?

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", matriz[i][j]);
        }
    }
}