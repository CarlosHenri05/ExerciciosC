#include <stdio.h>

void dobrarNumeros(int *a, int *b)
{
    int temp = *a;
    *a = (temp * 2) + (*b * 2);

    printf("%d", *a);
}

int main()
{
    int a = 5;
    int b = 2;

    dobrarNumeros(&a, &b);

    printf("%d", a);
}