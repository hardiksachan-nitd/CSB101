void print_if_leap(int year) {
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 && year % 100 == 0)){
    printf("%d\n", year);
  }
}
