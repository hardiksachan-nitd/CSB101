// write a program to print a string using pointers

#include <stdio.h>

int main() {
  char text[] = "Hello NITD!!";
  char *p = text;

  while (*p != '\0') {
    printf("%c", *p);
    p++;
  }
  printf("\n");
}
