// to input 4 integers and print them in forward and reverse order

#include <stdio.h>

int main()
{

    int a, b, c, d;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("The numbers in forward order: %d %d %d %d\n", a, b, c, d);
    printf("The numbers in reverse order: %d %d %d %d\n", d, c, b, a);

    return 0;
}