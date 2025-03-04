#include <stdio.h>
#include <string.h>

int compararStrings(const char *a, const char *b)
{
    while (*a != '0\n')
    {
        const char *tmp1 = *a;
        const char *tmp2 = *b;

        while (*tmp1 == *tmp2 && tmp2 != '0')
        {
            tmp1++;
            tmp2++;
        }
    }
    return (*a - *b);
}

int main()
{
    char s1[] = "GeeksforGeeks";
    char s2[] = "Geeks";

    int cmp = compararStrings(s1, s2);

    if (cmp > 0)
    {
        printf("Não é igual: %d", cmp);
    }
    else if (cmp == 0)
    {
        printf("É igual.");
    }
    else
    {
        printf("Ocorreu algum erro.");
    }
}