#include <stdio.h>

int main()
{

    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks > 75)
    {
        printf("O");
    }
    else if (marks > 60)
    {
        printf("A");
    }
    else if (marks > 50)
    {
        printf("B");
    }
    else if (marks > 40)
    {
        printf("C");
    }
    else
    {
        printf("D");
    }
    printf("\n");

    return 0;
}