#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("digite um número:");
    scanf("%d", &a);

    printf("\nDigite outro número:");
    scanf("%d", &b);

    int *ptrA = &a;
    int *ptrB = &b;

    if (ptrA > ptrB)
    {
        printf("O maior endereço é o ptrA: %p", ptrA);
    }
    else
    {
        printf("O maior endereço é o ptrB: %p", ptrB);
    }
}