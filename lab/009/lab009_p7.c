/* Take the marks of your last semester subjects as an input. Determine the maximum and
 * minimum scores using Bubble Sort 
 */

#include <stdio.h>

int main()
{
    int n, i, j, temp;
    printf("Enter the number of subjects: ");
    scanf("%d", &n);
    int marks[n];
    printf("Enter the marks of the subjects:\n");
    for (i = 0; i < n; i++)
    {
        printf("\tSubject %d: ", i+1);
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (marks[j] > marks[j + 1])
            {
                temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }
    printf("\nThe maximum marks are: %d", marks[n - 1]);
    printf("\nThe minimum marks are: %d\n", marks[0]);
    return 0;
}