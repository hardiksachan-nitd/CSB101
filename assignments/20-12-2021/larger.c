#include <stdio.h>

int main()
{

    int a;
    int b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("larger: %d", a);
    }
    else
    {
        printf("larger: %d", b);
    }

    return 0;
}