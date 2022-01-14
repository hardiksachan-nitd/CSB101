/** Write a program to take input of Rollno, Name, Phone no and Marks obtained by a student
in lab course CSB101 in 5 Labs each have its 10 full marks and display the name, rollno
with percentage score secured. */

#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5,
        rollno,
        phone;
    char name[30];

    printf("Enter your name: ");
    scanf("%[^\n]%*c", name);

    printf("Enter your roll no: ");
    scanf("%d", &rollno);

    printf("Enter your phone no: ");
    scanf("%d", &phone);

    printf("Enter your marks in labs 1 through 5: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    printf("\n\n\n\n");
    printf("Name: %s\n", name);
    printf("Roll No: %d\n", rollno);
    printf("Percentage: %d%%\n", (m1 + m2 + m3 + m4 + m5) * 2);

    return 0;
}