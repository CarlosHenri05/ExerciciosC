#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

void quadradoPerfeito(unsigned int s)
{
    unsigned int tmp = sqrt(s);

    if (tmp * tmp == s)
    {
        puts("É perfeito");
    }
    else
    {
        puts("Não é");
    }
}

int main()
{
    unsigned int num;
    while (num >= 0)
    {
        puts("Digite número: ");
        scanf("%u", &num);
        quadradoPerfeito(num);
        return 0;
    }
}
