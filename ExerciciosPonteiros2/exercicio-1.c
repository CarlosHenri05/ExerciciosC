#include <stdio.h>

int main()
{
    int a;
    int b;

    int *ptrA = &a;
    int *ptrB = &b;

    if (ptrA > &b)
    {
        printf("O endereço do pointer A é maior: %p", ptrA);
    }
    else
    {
        printf("O endereço do pointer A é maior: %p", ptrB);
    }
}