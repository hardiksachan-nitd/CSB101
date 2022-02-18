// enter 10 floating numbers in an array and display the value and memory
// address of respective number

#include <stdio.h>

int main() {
  float arr[10];
  printf("Enter 10 floats: ");
  for (int i = 0; i < 10; i++) {
    scanf("%f", &arr[i]);
  }

  printf("\nNumber\t\tMemory Address\n");
  for (int i = 0; i < 10; i++) {
    printf("%.3f\t\t%p\n", arr[i], &arr[i]);
  
  }
}
