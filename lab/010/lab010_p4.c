/* Write a program using structure for railway ticket generation program that
 * uses named initialization in a structure.
 */

#include <stdio.h>
#include <string.h>
#define STR_LEN 500

int readDate() {
  int dd, mm, yy;
  scanf("%d/%d/%d\n", &dd, &mm, &yy);

  int date = 0;
  date = dd + mm * 100 + yy * 10000;

  return date;
}

void printDate(int date) {
  int dd = date % 100;
  int mm = (date / 100) % 100;
  int yy = date / 10000;

  printf("%02d/%02d/%04d", dd, mm, yy);
}

struct ticket {
  char owner[STR_LEN];
  char train[STR_LEN];
  char source[STR_LEN];
  char destination[STR_LEN];
  int departure_date;
  char coach[STR_LEN];
  int seat_no;
};

void loadTickets(struct ticket *tickets) {
  printf("Initializing tickets...\n");
  int i;
  for (i = 0; i < 3; i++) {
    printf("\nReading details of ticket %d:\n", i + 1);
    fgets(tickets[i].owner, STR_LEN, stdin);
    fgets(tickets[i].train, STR_LEN, stdin);
    fgets(tickets[i].source, STR_LEN, stdin);
    fgets(tickets[i].destination, STR_LEN, stdin);
    tickets[i].departure_date = readDate();
    fgets(tickets[i].coach, STR_LEN, stdin);
    scanf("%d\n", &tickets[i].seat_no);
  }
  printf("Tickets initialized.\n\n\n");
}

int main() {
  struct ticket tickets[5];
  loadTickets(tickets);

  char coach[STR_LEN];
  int seat_no;

  printf("Reading query for coach and seat no...\n");
  fgets(coach, STR_LEN, stdin);
  scanf("%d", &seat_no);

  printf("coach: %s", coach);
  printf("seat_no: %d\n", seat_no);

  printf("***************** Indian Railway Ticket ********************\n");

  for (int i = 0; i < 5; i++) {
    if (strcmp(tickets[i].coach, coach) == 0 && tickets[i].seat_no == seat_no) {
      printf("Owner: %s", tickets[i].owner);
      printf("Train: %s", tickets[i].train);
      printf("Source: %s", tickets[i].source);
      printf("Destination: %s", tickets[i].destination);
      printf("Departure date: %d\n", tickets[i].departure_date);
      printf("Coach: %s", tickets[i].coach);
      printf("Seat number: %d\n", tickets[i].seat_no);

      break;
    }
  }
  printf("*************************************************************\n");
}
