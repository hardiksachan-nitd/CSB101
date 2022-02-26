// produce a table showing popularity of various cars in four cities

#include <stdio.h>
#include <stdlib.h>

int DATA_SIZE = 30;

int cityToIdx(char city) {
  switch (city) {
  case 'M':
    return 0;
  case 'D':
    return 1;
  case 'C':
    return 2;
  case 'B':
    return 3;
    default:
    printf("Illegal State Exception. %c", city);
    exit(-1);
  }
}

int main() {
  int data[4][4];
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      data[i][j] = 0;
    }
  }

  for (int k = 0; k < DATA_SIZE; k++) {
    char city;
    int car;

    scanf("%c %d ", &city, &car);
    data[cityToIdx(city)][car - 1]++;
  }

  printf("\tAmbassador\tFord\tDuster\tMaruti\n");
  for (int i = 0; i < 4; i++) {
    switch (i) {
    case 0:
      printf("Madras\t");
      break;
    case 1:
      printf("Delhi\t");
      break;
    case 2:
      printf("Calcutta");
      break;
    case 3:
      printf("Bombay\t");
      break;
    }

    printf("\t");

    for (int j = 0; j < 4; j++) {
      printf("%d\t", data[i][j]);
    }
    printf("\n");
  }
}
