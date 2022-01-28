#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice, a, b;

    do
    {
        printf("Enter the choice: ");
        scanf("%d", &choice);

        if (choice <= 0 || choice >= 6)
        {
            goto errorcheck;
        }

        if (choice == 5) {
            break;
        }

        scanf("%d %d", &a, &b);

        switch (choice)
        {
        case 1:
            printf("Addition of %d and %d: %d\n", a, b, a + b);
            break;

        case 2:
            printf("Subtraction of %d and %d: %d\n", a, b, a - b);
            break;

        case 3:
            printf("Product of %d and %d: %d\n", a, b, a * b);
            break;

        case 4:
            printf("Quotient of %d and %d: %d\n", a, b, a / b);
            break;

        default:
            break;
        }
    } while (choice != 5);

    printf("Exiting calculator...\n");
    return 0;

errorcheck:
    printf("Illegal choice. exiting...\n");
    return 0;
}