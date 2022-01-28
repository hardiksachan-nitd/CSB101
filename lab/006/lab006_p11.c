// calculate the total, aggregate and display the grades obtained by the students
// and show it in form of bar graph

#include <stdio.h>

void printCount(char *grade, int count)
{
    printf("Total count of %s:\t%d\n", grade, count);
}

void printGraph(char *grade, int count)
{
    printf("%s\t||", grade);
    for (int i = 0; i < count; i++)
    {
        printf("*");
    }
    printf("\n");
}

int main()
{
    int ap = 0,
        a = 0,
        bp = 0,
        b = 0,
        c = 0,
        d = 0,
        f = 0;

    printf("Enter your marks: ");
    int marks;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &marks);
        if (marks >= 94)
            ap++;
        else if (marks >= 85)
            a++;
        else if (marks >= 70)
            bp++;
        else if (marks >= 60)
            b++;
        else if (marks >= 50)
            c++;
        else if (marks >= 30)
            d++;
        else
            f++;
    }

    printf("\n\n");

    printCount("A+", ap);
    printCount("A", a);
    printCount("B+", bp);
    printCount("B", b);
    printCount("C", c);
    printCount("D", d);
    printCount("F", f);

    printf("\n\n");

    printGraph("A+", ap);
    printGraph("A", a);
    printGraph("B+", bp);
    printGraph("B", b);
    printGraph("C", c);
    printGraph("D", d);
    printGraph("F", f);
}