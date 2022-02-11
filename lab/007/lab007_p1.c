// to display binary, octal, and hexadecimal eqivalent of a decimal number

#include <stdio.h>

void displayOctal(int n) { printf("Octal\t\t: %o\n", n); }

void displayHex(int n) { printf("Hexadecimal\t: %X\n", n); }

void displayBinary(int n) {
  char oct[1000];
  sprintf(oct, "%o", n);

  printf("Binary\t\t: ");

  long i = 0;
  while (oct[i]) {
    switch (oct[i]) {
    case '0':
      printf("000");
      break;
    case '1':
      printf("001");
      break;
    case '2':
      printf("010");
      break;
    case '3':
      printf("011");
      break;
    case '4':
      printf("100");
      break;
    case '5':
      printf("101");
      break;
    case '6':
      printf("110");
      break;
    case '7':
      printf("111");
      break;
    default:
      return;
    }
    i++;
  }

  printf("\n");
}

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  printf("\n\n");

  displayOctal(n);
  displayHex(n);
  displayBinary(n);

  return 0;
}
