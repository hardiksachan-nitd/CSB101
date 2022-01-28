// to display the largest of five number using ternary operator

#include <stdio.h>
#include <limits.h>

int main()
{
    int max = INT_MIN;
    int n;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &n);

        max = max > n ? max : n;
    }

    printf("The largest of five numbers entered is: %d\n", max);
}