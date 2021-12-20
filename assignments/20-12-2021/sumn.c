#include <stdio.h>

int main()
{

   int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Not considering int limit cuz its a proof-of-concept
    int s = n * (n+1) / 2;

    printf("Sum till %d = %d\n", n, s);

    return 0;
}