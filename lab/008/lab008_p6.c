// Using "point-slope" form of the line, 
// y - y1 = m(x-x1)
// Find slope form of the line
// And find two other points

#include <stdio.h>

int main() {
  int x1, y1,
      x2, y2;
  float m, b;

  printf("Enter two points and value of intercept b: ");
  scanf("%d %d %d %d %f", &x1, &y1, &x2, &y2, &b);

  m = ((y2-y1) * 1.0)/(x2-x1);

  printf("m: %.3f\tb: %.3f\n", m, b);
  printf("The line equation is: y = %.3f * x + %.3f\n", m, b);
  
  float x, y;
  printf("Enter the value of x to find the value of y: ");
  scanf("%f", &x);
  y = m*x + b;
  printf("For x = %.3f;\ty = %.3f * %0.3f + %0.3f = %0.3f\n", x, m, x, b, y);
}
