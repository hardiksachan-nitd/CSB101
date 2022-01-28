// to print the multiplication table from 1x1 to 12x10

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 12; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d\t", i * j);
        }

        printf("\n");
    }
}