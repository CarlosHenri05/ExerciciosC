#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int lista[], int n)
{
    int i;
    int j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (lista[j] > lista[j + 1])
                swap(&lista[j], &lista[j + 1]);
}

int main()
{
    int lista[] = {5, 3, 4, 1, 2};
    int size = sizeof(lista) / sizeof(lista[0]);

    for (int i = 0; i < 5; i++)
    {
        printf(" Antes da troca: índice: %d, elemento: %d \n", i, lista[i]);
    }
    bubbleSort(lista, size);

    for (int i = 0; i < 5; i++)
    {
        printf(" Depois da troca: índice: %d, elemento: %d \n", i, lista[i]);
    }
}