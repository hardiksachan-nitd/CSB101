// write a program to find the sum of all the elements of an array using pointer

#include <stdio.h>

int main() {
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int arr[n];
  int *p = arr;
  
  printf("Enter the elements of the array: ");
  while (p < arr + n) {
    scanf("%d", p);
    p++;
  }

  p = arr;
  int sum = 0;

  while (p < arr + n) {
    sum += *p;
    p++;
  }
  printf("Sum: %d\n", sum);
  return 0;
}
