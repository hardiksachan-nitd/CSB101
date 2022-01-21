// Find whether a given year is a leap year or not

#include <stdio.h>

int main() {

    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) {
        printf("Leap Year\n");
    } else {
        printf("Not a Leap Year\n");
    }

    return 0;
}