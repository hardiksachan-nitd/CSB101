/* perform the different bitwise operators: 
 * Bitwise AND, Bitwise OR, Bitwise XOR, Bitwise complement
 * (+2's Complement), Right shift operator and Left shift operator.
*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\na: %d\tb: %d\n\n", a, b);

    printf("Bitwise AND\t-\ta & b\t:\t%d\n", (a & b));
    printf("Bitwise OR\t-\ta | b\t:\t%d\n", (a | b));
    printf("Bitwise XOR\t-\ta ^ b\t:\t%d\n", (a ^ b));
    printf("2's complemnent\t-\t~b\t:\t%d\n", (~b));
    printf("Right shift\t-\ta >> b\t:\t%d\n", (a >> b));
    printf("Left shift\t-\ta << b\t:\t%d\n", (a << b));


    return 0;
}