// to display binary, octal, and hexadecimal eqivalent of a decimal number

#include <stdio.h>

void changeBase(int n, int base) {
  int result[100];

  int i = 0;
  while (n > 0) {
    result[i] = n % base;
    n = n / base;
    i++;
  }

  for (int j = i - 1; j >= 0; j--) {
    if (result[j] <= 9) {
      printf("%d", result[j]);
    } else {
      printf("%c", 'A' + result[j] - 10);
    }
  }
}

void displayOctal(int n) {
  printf("Octal\t\t: ");
  changeBase(n, 8);
  printf("\n");
}

void displayHex(int n) {
  printf("Hexadecimal\t: ");
  changeBase(n, 16);
  printf("\n");
}

void displayBinary(int n) {
  printf("Binary\t\t: ");
  changeBase(n, 2);
  printf("\n");
}

int main() {
  // reroute stdin to lab007_p1_input.txt
  // freopen("lab007_p1_input.txt", "r", stdin);

  // reroute stdout to lab007_p1_output.txt
  // freopen("lab007_p1_output.txt", "a+", stdout);

  int n;
  scanf("%d", &n);

  displayOctal(n);
  displayHex(n);
  displayBinary(n);

  return 0;
}
