#include <stdio.h>

int main()
{
    int a;
    int *ptr = &a;

    a = 6;

    *ptr += 1; // É a mesma coisa que a+=1?

    *ptr = 32;

    printf("%d", *ptr);
    printf("%d", a);
}