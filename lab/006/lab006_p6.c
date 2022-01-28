#include <stdio.h>

int main() {
    int a = 0,
        b = 1;
    
    printf("0 ");
    
    int c = 1;

    while (c <= 300)
    {
        printf("%d ", c);
        c = a + b;
        a = b;
        b = c;
    }
    
    printf("\n");
}