#include <stdio.h>

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  int p = 1;
  double q = 1.0;

  double sum = 0;

  for (p = 1; p <= n; p++) {
    q *= p;
    sum += (p/q);
  }

  printf("Sum of the series: %0.8lf\n", sum);
}
