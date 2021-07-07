#include <stdio.h>

void    forca(int estado)
{
    if (estado == 0)
    {
        printf("\n-------------------");
        printf("\n|                 |");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }
    else if (estado == 1)
    {
        printf("\n-------------------");
        printf("\n|                 |");
        printf("\n|                 O");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }
    else if (estado == 2)
    {
        printf("\n-------------------");
        printf("\n|                 |");
        printf("\n|                 O");
        printf("\n|                 |");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }
    else if (estado == 3)
    {
        printf("\n-------------------");
        printf("\n|                 |");
        printf("\n|              \\ 0");
        printf("\n|                 |");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }
    else if (estado == 4)
    {
        printf("\n-------------------");
        printf("\n|                 |");
        printf("\n|              \\ 0 /");
        printf("\n|                 |");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }
    else if (estado == 5)
    {
        printf("\n-------------------");
        printf("\n|                 |");
        printf("\n|              \\ 0 /");
        printf("\n|                 |");
        printf("\n|                  \\");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }
    else if (estado == 6)
    {
        printf("\n-------------------");
        printf("\n|                 |");
        printf("\n|               \\ 0 /");
        printf("\n|                 |");
        printf("\n|                / \\");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n-");
    }
}

int main(void)
{
    forca(4);

    return (0);
}
