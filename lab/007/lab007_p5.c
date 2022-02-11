// To print multiplication table

#include <stdio.h>

void printtable(int n) {
  for (int i = 1; i <= 10; i++) {
    printf("%d\tx\t%d\t=\t%d\n", n, i, n * i);
  }
}

int main() {
  int n;
  scanf("%d", &n);

  printtable(n);

  return 0;
}
