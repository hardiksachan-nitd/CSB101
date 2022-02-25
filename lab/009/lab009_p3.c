// Write a program to read multiple lines of text until a * is entered. Then
// count the number of characters, words, and lines in the text.

#include <stdio.h>

int main() {
  char text[200];
  scanf("%[^*]s", text);

  int chars = 0;
  int words = 0;
  int lines = 0;
  int i = 0;

  while (text[i] != '\0') {
    if (text[i] == '\n') {
      lines++;
    }
    if (text[i] == ' ' || text[i] == '\n') {
      words++;
    }
    chars++;
    i++;
  }

  printf("Character: %d\nWords: %d\nLines: %d\n", chars, words, lines);
}
