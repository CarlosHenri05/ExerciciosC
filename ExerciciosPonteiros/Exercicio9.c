#include <stdio.h>

int main()
{
    int lista[5] = {1, 2, 3, 4, 5};
    int *ptr = lista; // Aponta para o primeiro elemento do array

    for (int i = 0; i < 5; i++)
    {
        printf("dobro = %d", *(ptr + i) * 2);
    }
}