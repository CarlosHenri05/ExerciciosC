#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{

    for (int i = 0; i < 200; i++)
    {
        if (i % 4 == 0)
        {
            printf("--%d", i);
        }
    }
}