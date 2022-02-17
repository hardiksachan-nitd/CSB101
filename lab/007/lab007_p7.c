// To calculate power of a number

#include <stdio.h>

int pow_r(int n, int r, int ans) {
  if (r == 0) return ans;
  return pow_r(n, r-1, ans * n);
}

int pow_nr(int n, int r) {
  int result =1;
  for (int i = 1; i <= n; i++) {
    result *= i;  
  }
}

double power(int n, int r) {
  if (r > 0) {
    return pow_r(n, r, 1);
  }
  return 1.0 / pow_nr(n, -r);
}

int main() {
  int a, b;
  scanf("%d %d", &a, &b);

  printf("%.10lf\n", power(a, b));
}
