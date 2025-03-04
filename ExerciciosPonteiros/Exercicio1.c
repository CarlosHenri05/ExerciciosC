#include <stdio.h>

int main()
{

    int inteiro;
    char caracter;
    float real;

    inteiro = 6;
    caracter = 'c';
    real = 1.67;

    printf("%d\n", inteiro);
    printf("%c\n", caracter);
    printf("%.2f\n", real);

    int *ptr_to_inteiro = &inteiro;
    char *ptr_to_caracter = &caracter;
    float *ptr_to_real = &real;

    *ptr_to_inteiro += 1;
    *ptr_to_caracter = 'd';
    *ptr_to_real = 2.67;

    printf("%d\n", inteiro);
    printf("%c\n", caracter);
    printf("%.2f\n", real);
}