// to find sum of digits and reverse of a number

#include <stdio.h>

int number;

void rev(int number) {
  static int reverse = 0;
  int remainder, sum = 0;
  while (number != 0) {
    remainder = number % 10;
    sum += remainder;
    reverse = reverse * 10 + remainder;
    number /= 10;
  }

  printf("Reversed number = %d\n", reverse);
  printf("Sum of Digits = %d\n", sum);
}

int main() {
  printf("Enter an integer: ");
  scanf("%d", &number);

  rev(number);
  return 0;
}
