// Write a program to read multiple line of text until a ~ is entered using scanset
// and then display the text.

#include <stdio.h>

int main() {
  char text[200];

  printf("Enter a string:\n");
  scanf("%[^~]s", text);

  printf("\n");

  printf("%s\n", text);
}
