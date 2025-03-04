#include <stdio.h>

int main()
{
    int lista[5] = {1, 2, 3, 4, 5};

    int size = sizeof(lista) / sizeof(lista[0]);

    int *ptr = lista; // Reflete a mesma coisa que lista[0]

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", *(ptr + i));
    }
}