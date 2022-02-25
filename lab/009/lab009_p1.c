// Write a program that reads your name and displays the ASCII value of each
// character.

#include <stdio.h>

int main() {
  char name[100];
  int i;
  printf("Enter your name: ");
  scanf("%s", name);
  for (i = 0; name[i] != '\0'; i++) {
    printf("%c = %d\n", name[i], name[i]);
  }
  return 0;
}
