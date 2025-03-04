#include <stdio.h>

int main()
{
    float numeros[10];

    float *ptrNumeros = numeros;

    for (int i = 0; i < 10; i++)
    {
        printf("&numeros[%d] = %p", i, (void *)&numeros[i]);
    }
}