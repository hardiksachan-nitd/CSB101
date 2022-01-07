/* Take name and roll number as input and print the roll no in following formats:
 * %d - to print value in integer format
 * %o - to print value in octal format
 * %x - to print value in hexadecimal format (letters will print in lowercase)
 * %X - to print value in hexadecimal format (letters will print in uppercase)
 */

#include <stdio.h>

int main()
{
    char name[24];
    int roll_no;

    printf("Please enter your name: ");
    scanf("%s", &name);

    printf("Please enter your roll no: ");
    scanf("%d", &roll_no);

    printf("Hi %s, here are your roll no in different formats\n", name);
    printf("integer: %d\n", roll_no);
    printf("octal: %o\n", roll_no);
    printf("hexadecimal (lowercase): %x\n", roll_no);
    printf("hexadecimal (uppercase): %X\n", roll_no);

    return 0;
}