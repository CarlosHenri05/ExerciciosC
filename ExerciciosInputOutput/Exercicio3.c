#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;

    printf("Digite dois números:");
    scanf("%d %d", &a, &b);

    int soma = a + b;
    int produto = a * (b * b);
    int quadrado = a * a;
    int somaQuadrada = (a * a) + (b * b);
    int raizQuadrada = (int)sqrt(somaQuadrada);
    int modulo = abs(a);

    printf("A soma é: %d\n", soma);
    printf("O produto é: %d\n", produto);
    printf("O quadrado do primeiro número é: %d\n", quadrado);
    printf("A raiz quadrada da soma dos quadrados é: %d \n", raizQuadrada);
    printf("O modulo é: %d", modulo);
}