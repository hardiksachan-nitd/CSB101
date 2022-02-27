#include <stdio.h>

int main() {
  char str[200];
  printf("Enter the string: ");
  scanf("%[^\n]s", &str);

  getchar();

  char pattern[20];
  printf("Enter the pattern: ");
  scanf("%[^\n]s", &pattern);

  int count = 0;

  char *s = str;
  while (*s != '\0') {
    char *p = pattern;
    char *k = s;
    while (*p != '\0') {
      if (*p != *k) {
        break;
      }
      p++;
      k++;
    }
    if (*p == '\0') {
      count++;
    }
    s++;
  }

  printf("\nPattern Found %d times.\n", count);
}
