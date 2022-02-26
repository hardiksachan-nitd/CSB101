// write a program to check if a string is palindrome or not

#include <stdio.h>

int main() {
  char str[100];
  printf("Enter a string: ");
  scanf("%s", str);

  int len = 0;

  while (str[len] != '\0') {
    len++;
  }

  int i = 0, j = len - 1;
  while (i < j) {
    if (str[i] != str[j]) {
      printf("Not a palindrome\n");
      return 0;
    }
    i++;
    j--;
  }
  printf("Palindrome\n");
}
