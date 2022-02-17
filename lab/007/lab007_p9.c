// To swap first and last digit of a number

#include <stdio.h>

int main() {
  long n;
  printf("Enter a number: ");
  scanf("%ld", &n);

  long modified = n;

  int last = n % 10;
  long multiplier = 1;
  int first = n%10;

  while (n > 0) {
    multiplier *= 10;
    first = n % 10;
    n /= 10;
  }

  multiplier /= 10;

  modified = modified - last - (first * multiplier) + (last * multiplier) + first;
  printf("%ld\n", modified);
}
