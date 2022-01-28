// to print a pyramid

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\n\n");

    for (int i = 0; i <= n; i++)
    {
        for (int j = n; j >= 1; j--)
        {
            if (j <= i) {
                printf("%d\t", j);
            } else {
                printf(" \t");
            }
        }

        printf("0\t");

        for (int j = 1; j <= n; j++)
        {
            if (j <= i) {
                printf("%d\t", j);
            } else {
                printf(" \t");
            }
        }
        printf("\n");
    }
}