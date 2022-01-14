// Print the value of y for given x=2 & z=4 and analyze the output

#include <stdio.h>

int main()
{

    int x, y, z;

    printf("Enter x and z: ");
    scanf("%d %d", &x, &z);

    printf("\nx: %d\nz: %d\n\n", x, z);

    y = x < z ? z : x;
    printf("a) y = x < z ? z : x;\t\ty = %d\n", y);
    y = x++ + ++x;
    printf("b) y = x++ + ++x;\t\ty = %d\n", y);
    y = ++x + ++x;
    printf("c) y = ++x + ++x;\t\ty = %d\n", y);
    y = ++x + ++x + ++x;
    printf("d) y = ++x + ++x + ++x;\t\ty = %d\n", y);
    y = x > z;
    printf("e) y = x > z;\t\t\ty = %d\n", y);
    y = x | z;
    printf("f) y = x | z;\t\t\ty = %d\n", y);
    y = x >> 2 + z << 1;
    printf("g) y = x >> 2 + z << 1;\t\ty = %d\n", y);

    return 0;
}