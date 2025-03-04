#include <stdio.h>

void preencherArray(int lista[], int n, int size)
{
    int *ptr = lista;
    for (int i = 0; i < size; i++)
    {
        *(ptr + i) = n;
    }
}

int main()
{

    int array[3];
    int *ptr = array;
    int n;

    int size = sizeof(array) / sizeof(array[0]);

    printf("Digite um número para preencher a array: ");
    scanf("%d", &n);

    preencherArray(array, n, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d", *(ptr + i));
    }
}