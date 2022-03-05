/* Create a structure named company which has name, address, phone and noOfEmployee
 * as member variables. Read name of company, its address, phone and noOfEmployee.
 * Finally display these members’ value.
 */

#include <stdio.h>
#define STR_LEN 100

struct company
{
    char name[STR_LEN];
    char address[STR_LEN];
    int phone;
    int noOfEmployee;
};

int main()
{
    struct company c;

    printf("Enter the name of company: ");
    fgets(c.name, STR_LEN, stdin);
    printf("Enter the address of company: ");
    fgets(c.address, STR_LEN, stdin);
    printf("Enter the phone of company: ");
    scanf("%d", &c.phone);
    printf("Enter the no of employees of company: ");
    scanf("%d", &c.noOfEmployee);

    printf("\n\n");

    printf("Name of company: %s", c.name);
    printf("Address of company: %s", c.address);
    printf("Phone of company: %d\n", c.phone);
    printf("No of employees of company: %d\n", c.noOfEmployee);
}