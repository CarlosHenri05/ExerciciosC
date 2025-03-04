#include <stdio.h>

int main()
{
    int a;
    int b;

    int *ptr_a = &a;
    int *ptr_b = &b;

    if (ptr_a > ptr_b)
    {
        printf("%p", ptr_a);
    }
    else
    {
        printf("%p", ptr_b);
    }
}