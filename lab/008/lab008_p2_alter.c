// display the sum and average of COVID-19 cases in Delhi for a week

#include <stdio.h>

int main() {
  int arr[7][4];

  for (int i = 0; i < 7; i++) {
    scanf("%d/%*s %*s %d %*s", &arr[i][0], &arr[i][1]);
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

    printf("%d/01/2021\t%d\t\t%d\t\t%d\n", arr[i][0], arr[i][1], arr[i][2],
           arr[i][3]);
  }
  printf("%80s\n", "");
  printf("Sum\t\t%d\t\t%d\t\t%d\n", hospitalisedSum, recoveredSum, deceasedSum);
  printf("Average\t\t%f\t%f\t%f\n", hospitalisedSum / 7.0, recoveredSum / 7.0,
         deceasedSum / 7.0);
}
