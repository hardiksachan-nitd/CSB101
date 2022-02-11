// another calculator

#include <stdio.h>

void calculate(int choice) {
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);

  switch (choice) {
  case 1:
    printf("Addition of %d and %d: %d\n", a, b, a + b);
    break;

  case 2:
    printf("Subtraction of %d and %d: %d\n", a, b, a - b);
    break;

  case 3:
    printf("Product of %d and %d: %d\n", a, b, a * b);
    break;

  case 4:
    printf("Quotient of %d and %d: %d\n", a, b, a / b);
    break;
  }
}

int main() {
  int choice;

  while (1) {
    printf("Enter the choice: ");
    scanf("%d", &choice);

    if (choice == 5)
    {
      printf("Exiting...");
      break;
    }
    if (choice <= 0 || choice > 5) {
      printf("Not a valid choice. Terminating...");
      return 0;
    }

    calculate(choice);
  }
}
