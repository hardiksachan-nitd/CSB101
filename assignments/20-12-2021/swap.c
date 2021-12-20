#include <stdio.h>

int main() {

    int a;
    int b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    int t = a;
    a = b;
    b = t;

    printf("first number: %d\nsecond number: %d\n", a, b);


    return 0;
}