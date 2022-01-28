#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n)
    {
        printf("Count %d: \"Welcome to NIT Delhi !!\n", i);
        i++;
    }
}