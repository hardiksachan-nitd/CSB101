// Write a program to sort the name of the students. Take the count of students from the users.

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char names[50][50];
    char temp[50];

    printf("Enter the number of students:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter name of Student %d:", i + 1);
        scanf("%s", &names[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    printf("\nNames in Sorted order are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}
