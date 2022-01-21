// Determine whether a person is eligible to vote

#include <stdio.h>

int main() {

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Elegible to vote\n");
    } else {
        printf("Not Elegible\n");
    }

    return 0;
}