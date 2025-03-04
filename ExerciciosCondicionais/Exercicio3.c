#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main()
{
    float a;

    printf("Digite um número: ");
    scanf("%f", &a);

    if (a > 0)
    {
        printf("%.2f", sqrt(a));
    }
    else
    {
        printf("%.2f", a * a);
    }
}