// to swap to numbers with and without using third variable

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers (a, b): ");
    scanf("%d %d", &a, &b);

    // Using third variable
    int temp = a;
    a = b;
    b = temp;

    printf("After swapping\n\ta: %d\tb: %d\n", a, b);

    // Without using third variable
    b = a + b;
    a = b - a;
    b = b - a;

    printf("After swapping again\n\ta: %d\tb: %d\n", a, b);

    return 0;
}