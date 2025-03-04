#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{

    int valorProduto;
    int valorProdutoNovo;

    printf("Digite o valor do produto: ");
    scanf("%d", &valorProduto);

    int maiorQue20 = valorProduto * 0.45;
    int menorQue20 = valorProduto * 0.30;

    if (valorProduto > 20)
    {
        valorProdutoNovo = valorProduto + maiorQue20;
        printf("Esse é o valor do produto caso seja maior que 20: %d ", valorProdutoNovo);
    }
    else
    {
        valorProdutoNovo = valorProduto + menorQue20;
        printf("Esse é o valor do produto caso seja menor que 20: %d ", valorProdutoNovo);
    }
}