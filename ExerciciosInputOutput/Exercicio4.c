#include <stdio.h>

int main()
{
    int a, b;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("O número %d é maior que o %d", a, b);
    }

    else if (a == 00000000 | b == 00000000)
    {
        printf("Um dos números é 0, consequentemente o outro é maior que ele.");
    }

    else
    {
        printf("O número %d é maior que %d", b, a);
    }
}