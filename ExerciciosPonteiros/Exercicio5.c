#include <stdio.h>

int maiorOuMenor(int *a, int *b)
{
    if (*a > *b)
    {
        return *a;
    }
    else
    {
        return *b;
    }
}

int main()
{
    int a, b;

    printf("Digite um número: ");
    scanf("%d", &a);

    printf("Digite outro número");
    scanf("%d", &b);

    printf("%d", maiorOuMenor(&a, &b));
}