#include <stdio.h>

void imprimirDobro(int lista[], int size)
{
    int *ptr = lista; // significa lista[0]

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", *(ptr + i) * 2); // significa lista[i]
    }
}

int main()
{
    int lista[5] = {1, 2, 3, 4, 5};
    int size = sizeof(lista) / sizeof(lista[0]);

    imprimirDobro(lista, size);
}