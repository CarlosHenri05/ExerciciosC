#include <stdio.h>

void metodoExercicioQuatro(int lista[], int n, int size)
{

    int *ptr = lista; // Lista[0]

    for (int i = 0; i < size; i++)
    {
        *(ptr + i) = n;
    }
}

int printarArray(int lista[], int size)
{
    int *ptr = lista;
    for (int i = 0; i < size; ++i)
    {
        printf("%d\n", *(ptr + i));
    }
}

int main()
{
    int n;
    int lista[5] = {1, 2, 3, 4, 5};
    int size = sizeof(lista) / sizeof(lista[0]);

    printf("Digite um número: ");
    scanf("%d", &n);

    metodoExercicioQuatro(lista, n, size);

    printarArray(lista, size);
}