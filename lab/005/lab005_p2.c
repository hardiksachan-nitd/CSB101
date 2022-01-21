// Determines whether the entered character is an alphabet or not.

#include <stdio.h>

int main() {

    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        printf("Alphabet\n");
    } else {
        printf("Not an Alphabet\n");
    }

    return 0;
}