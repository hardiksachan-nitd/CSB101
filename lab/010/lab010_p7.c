/* Define a structure “complex” (typedef) to read two complex numbers and per
 * orm addition, subtraction of these two complex numbers and display the
 * result.
 */

#include <stdio.h>

typedef struct {
  int real;
  int imaginary;
} complex;

int main() {
  complex c1, c2, c3;
  printf("Enter the real and imaginary part of the first complex number: ");
  scanf("%d %d", &c1.real, &c1.imaginary);
  printf("Enter the real and imaginary part of the second complex number: ");
  scanf("%d %d", &c2.real, &c2.imaginary);

  c3.real = c1.real + c2.real;
  c3.imaginary = c1.imaginary + c2.imaginary;
  printf("The sum of the two complex numbers is: %d + %di\n", c3.real,
         c3.imaginary);

  c3.real = c1.real - c2.real;
  c3.imaginary = c1.imaginary - c2.imaginary;
  printf("The difference of the two complex numbers is: %d + %di\n", c3.real,
         c3.imaginary);

  return 0;
}
