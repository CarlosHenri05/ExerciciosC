#include <stdio.h>

int main()
{
    int lista[5] = {1, 2, 3, 4, 5};
    int *ptr = lista;

    for (int i = 0; i < 5; i++)
    {
        if (*(ptr + i) % 2 == 0)
        {
            printf("Elemento: %d\n", i);
            printf("\nPonteiro: %p", ptr);
        }
    }
}