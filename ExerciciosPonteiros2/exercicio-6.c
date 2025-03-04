#include <stdio.h>

void soma(int *a, int *b)
{
    int temp = *a;
    *a = *b + temp;

    printf("%d", *a);
}

int main()
{
    int *a;
    int *b;

    *a = 1;
    *b = 2;

    soma(a, b);
}