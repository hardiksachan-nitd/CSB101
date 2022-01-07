/* To find the size of following data types
 * char, short, int, long, long long, float, double, long double
*/

#include <stdio.h>

int main()
{
    printf("NOTE: All the sizes are in bytes\n\n\n");
    printf("size of char is: %d\n", sizeof(char));
    printf("size of short is: %d\n", sizeof(short));
    printf("size of int is: %d\n", sizeof(int));
    printf("size of long is: %d\n", sizeof(long));
    printf("size of long long is: %d\n", sizeof(long long));
    printf("size of float is: %d\n", sizeof(float));
    printf("size of double is: %d\n", sizeof(double));
    printf("size of long double is: %d\n", sizeof(long double));

    return 0;
}