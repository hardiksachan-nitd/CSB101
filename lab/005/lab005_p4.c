// Calculate tax, given the following conditions

#include <stdio.h>

int main() {

    long income,
        tax;

    printf("Enter your income: ");
    scanf("%ld", &income);

    if (income <= 250000L) {
        tax = 0;
    } else if (income <= 500000L) {
        tax = 0.05 * (income - 250000L);
    } else if (income <= 1000000L) {
        tax = 12500L + 0.2 * (income - 500000L);
    } else {
        tax = 112500L + 0.3 * (income - 1000000L);
    }

    printf("Tax need to be paid: %ld\n", tax);

    return 0;
}