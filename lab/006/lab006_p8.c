// to print a character in mxn matrix

#include <stdio.h>

int main()
{
    int row, col;
    char c;

    printf("Enter rows, cols and charracter respectively: ");
    scanf("%d %d %c", &row, &col, &c);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%c ", c);
        }
        printf("\n");
    }
}