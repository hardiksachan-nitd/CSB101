// Swap two variables using call by value and call by reference

#include <stdio.h>

void swap_cbv(int a, int b) {
  int temp = b;
  b = a;
  a = temp;

  printf("Inside call-by-value scope:\n\ta: %d\t\tb: %d\n", a, b);
}

void swap_cbr(int* a, int* b) {
  int t = *b;
  *b = *a;
  *a = t;


  printf("Inside call-by-reference scope:\n\ta: %d\t\tb: %d\n", *a,* b);
}

int main() {
  int a, b;
  scanf("%d %d", &a, &b);

  printf("Inside main scope, before calling any function:\n\ta: %d\t\tb: %d\n", a, b);

  swap_cbv(a, b);

  printf("Inside main scope, after calling by value function:\n\ta: %d\t\tb: %d\n", a, b);

  swap_cbr(&a, &b);

  printf("Inside main scope, after calling by reference function:\n\ta: %d\t\tb: %d\n", a, b);

}
