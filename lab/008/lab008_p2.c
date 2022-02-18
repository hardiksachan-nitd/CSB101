// display the sum and average of COVID-19 cases in Delhi for a week

#include <stdio.h>

int inputDate() {
  int dd, mm, yy;

  scanf("%d/%d/%d", &dd, &mm, &yy);

  int date = 0;
  date |= (dd & 0xff);         // dd storing in byte 0
  date |= (mm & 0xff) << 8;    // mm storing in byte 1
  date |= (yy & 0xffff) << 16; // yy storing in byte 2 and 3

  return date;
}

void printDate(int date) {
  int dd = (date & 0xff);           // dd from byte 0
  int mm = ((date >> 8) & 0xff);    // mm from byte 1
  int yy = ((date >> 16) & 0xffff); // yy from byte 2 and 3

  printf("%02d/%02d/%04d", dd, mm, yy);
}

int main() {
  int arr[7][4];

  for (int i = 0; i < 7; i++) {
    arr[i][0] = inputDate();
    scanf("%*s %d %*s", &arr[i][1]);
    scanf("%*s %*s %d %*s", &arr[i][2]);
    scanf("%*s %*s %d %*s", &arr[i][3]);
  }

  int hospitalisedSum = 0;
  int recoveredSum = 0;
  int deceasedSum = 0;

  printf("Date\t\tHospitalized\tRecovered\tDeceased\n");
  for (int i = 0; i < 7; i++) {
    hospitalisedSum += arr[i][1];
    recoveredSum += arr[i][2];
    deceasedSum += arr[i][3];

    printDate(arr[i][0]);
    printf("\t%d\t\t%d\t\t%d\n", arr[i][1], arr[i][2], arr[i][3]);
  }
  printf("%80s\n", "");
  printf("Sum\t\t%d\t\t%d\t\t%d\n", hospitalisedSum, recoveredSum, deceasedSum);
  printf("Average\t\t%f\t%f\t%f\n", hospitalisedSum / 7.0, recoveredSum / 7.0,
         deceasedSum / 7.0);
}
