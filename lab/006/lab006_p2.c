// to display first 10 number in its natural and reverse order. (using for)

#include <stdio.h>

int main(){
    printf("Natural order: ");
    for (int i = 0; i <= 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    printf("Reverse order: ");
    for (int i = 10; i >= 0; i--)
    {
        printf("%d ", i);
    }
    printf("\n");
    
}