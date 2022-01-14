/** Take input as days, convert and display an equivalent number of months and days.
 * Assumption one month has 30 day. */

#include <stdio.h>

int main() {

    long days;
    printf("Enter number of days: ");
    scanf("%ld", &days);

    printf("Months: %ld, Days: %ld\n", (days / 30), (days % 30));

    return 0;
}