#include <stdio.h>

void trocarVariaveis(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a;
    int b;

    a = 5;
    b = 10;

    printf("Valores antes de serem mudados: A;%d B;%d ", a, b);

    trocarVariaveis(&a, &b);

    printf("Valores após a mudança: A;%d B;%d", a, b);
}
