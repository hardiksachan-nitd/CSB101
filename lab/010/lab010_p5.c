//  Create a structure to specify data of customers in a bank. The data to be
//  stores is : Account
// number, Name, Balance in account. Assume 500 customers in the bank.
// Write a function to print the account number and name of each customer with
// balance below Rs. 1000. If a customer requests for withdrawal or deposit, it
// is given in the form Account number, code ( 1 for deposit, 0 for withdrawal)
// Write a program to five a message “ the balance is insufficient for the s
// ecified withdrawal”, if on withdrawal the balance falls below Rs1000.

#include <stdio.h>

struct customer {
  int acc_no;
  char name[20];
  float balance;
};

void initializeCustomers(struct customer *customers, int n) {
  for (int i = 0; i < n; i++) {
    printf("Enter the details of customer %d\n", i + 1);
    printf("Enter the account number: ");
    scanf("%d", &customers[i].acc_no);
    printf("Enter the name: ");
    scanf("%s", customers[i].name);
    printf("Enter the balance: ");
    scanf("%f", &customers[i].balance);
  }
}

void printCustomer(struct customer *customer) {
  printf("Account number: %d\n", customer->acc_no);
  printf("Name: %s\n", customer->name);
  printf("Balance: %.2f\n", customer->balance);
}

int main() {
  struct customer customers[500];
  int n;
  printf("Enter the number of customers: ");
  scanf("%d", &n);
  initializeCustomers(customers, n);

  for (int i = 0; i < n; i++) {
    if (customers[i].balance < 1000) {
      printCustomer(&customers[i]);
    }
  }

  while (1) {

    printf("\n\n\n");

    int choice;
    printf("Do you want to withdraw or deposit?\n");
    printf("0. Deposit\n");
    printf("1. Withdraw\n");
    scanf("%d", &choice);
    printf("Enter the account number: ");
    int acc_no;
    scanf("%d", &acc_no);
    printf("Enter the amount: ");
    float amount;
    scanf("%f", &amount);

    for (int i = 0; i < n; i++) {
      if (acc_no == customers[i].acc_no) {
        if (choice == 0) {
          customers[i].balance += amount;
        } else if (choice == 1) {
          if (customers[i].balance - amount < 1000) {
            printf(
                "The balance is insufficient for the specified withdrawal\n");
          } else {
            customers[i].balance -= amount;
          }
        }
      }
    }
  }
}
