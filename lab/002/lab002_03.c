#include <stdio.h>

int main()
{
    char name[24];
    printf("Please enter your name: ");
    scanf("%s", &name);

    printf("Hello %s, Welcome to NIT Delhi!!\n", name);
    for (int i = 0; i < 4; i++)
    {
        printf("Welcome to NIT Delhi\n");
    }

    return 0;
}