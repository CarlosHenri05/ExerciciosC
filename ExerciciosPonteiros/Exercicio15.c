#include <stdio.h>

int main()
{
    int a;
    int *b;
    int **c;
    int ***d;

    b = &a;
    c = &b;
    d = &c;

    printf("Digite um valor para A: ");
    scanf("%d", &a);

    printf("%d\n", a);
    printf("%d\n", (*b) * 2);
    printf("%d\n", (**c) * 3);
    printf("%d\n", (***d) * 4);
}