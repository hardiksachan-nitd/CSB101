#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    printf("\n");

    return 0;
}