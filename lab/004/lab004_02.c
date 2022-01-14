// read a character in upper case and then print it in lower case

#include <stdio.h>

int main() {

    char offset = 'a' - 'A';
    char c;

    printf("Enter a character in upper case: ");
    scanf("%c", &c);

    printf("%c in lowercase: %c\n", c, c + offset);

    return 0;
}