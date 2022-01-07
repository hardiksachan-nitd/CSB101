// Take name as an input, and print "Hello [name], Welcome to NIT Delhi!!"

#include <stdio.h>

int main()
{
    char name[24];
    printf("Please enter your name: ");
    scanf("%s", &name);

    printf("Hello %s, Welcome to NIT Delhi!!\n", name);

    return 0;
}