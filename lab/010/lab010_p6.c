// Declare a structure to store the following information of an employee:
// Employee code , Employee name, Salary, Department Name, Date of joining (it
// is itself a structure consisting of day, month, and year)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STR_LEN 500

struct Employee {
  int code;
  char name[STR_LEN];
  float salary;
  char department[STR_LEN];
  struct Date {
    int day;
    int month;
    int year;
  } date_of_joining;
};

void displayEmployee(struct Employee *employee) {
  printf("Employee code: %d\n", employee->code);
  printf("Employee name: %s\n", employee->name);
  printf("Salary: %.2f\n", employee->salary);
  printf("Department: %s\n", employee->department);
  printf("Date of joining: %d/%d/%d\n", employee->date_of_joining.day,
         employee->date_of_joining.month, employee->date_of_joining.year);
}

// Use a function to display the employee information while getting the maximum
// and minimum salary.
void displayEmployeeInfo(struct Employee *employees, int n) {
  float max_salary = employees[0].salary;
  float min_salary = employees[0].salary;
  int max_index = 0;
  int min_index = 0;
  for (int i = 0; i < n; i++) {
    if (employees[i].salary > max_salary) {
      max_salary = employees[i].salary;
      max_index = i;
    }
    if (employees[i].salary < min_salary) {
      min_salary = employees[i].salary;
      min_index = i;
    }
  }
  printf("\n\n\n");
  printf("The maximum salary is %.2f and the employee is %s\n", max_salary,
         employees[max_index].name);
  printf("The minimum salary is %.2f and the employee is %s\n", min_salary,
         employees[min_index].name);
  printf("\n\n\n");
  for (int i = 0; i < n; i++) {
    displayEmployee(&employees[i]);
  }
}

//  Use a function to display the employee records in ascending order according
//  to their
// salary.
void displayEmployeeRecords(struct Employee *employees, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (employees[i].salary > employees[j].salary) {
        struct Employee temp = employees[i];
        employees[i] = employees[j];
        employees[j] = temp;
      }
    }
  }
  printf("\n\n\n");
  for (int i = 0; i < n; i++) {
    displayEmployee(&employees[i]);
  }
}

// Use a function to display the employee records in ascending order according
// to their date of joining
void displayEmployeeRecordsByJoiningDate(struct Employee *employees, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (employees[i].date_of_joining.year >
          employees[j].date_of_joining.year) {
        struct Employee temp = employees[i];
        employees[i] = employees[j];
        employees[j] = temp;
      } else if (employees[i].date_of_joining.year ==
                 employees[j].date_of_joining.year) {
        if (employees[i].date_of_joining.month >
            employees[j].date_of_joining.month) {
          struct Employee temp = employees[i];
          employees[i] = employees[j];
          employees[j] = temp;
        } else if (employees[i].date_of_joining.month ==
                   employees[j].date_of_joining.month) {
          if (employees[i].date_of_joining.day >
              employees[j].date_of_joining.day) {
            struct Employee temp = employees[i];
            employees[i] = employees[j];
            employees[j] = temp;
          }
        }
      }
    }
  }
  printf("\n\n\n");
  for (int i = 0; i < n; i++) {
    displayEmployee(&employees[i]);
  }
}

// Use a function to display the department wise employment records
void displayDepartmentWiseEmploymentRecords(struct Employee *employees, int n) {
  int d = 0;
  char departments[n][STR_LEN];

  for (int i = 0; i < n; i++) {
    int flag = 0;
    for (int j = 0; j < d; j++) {
      if (strcmp(employees[i].department, departments[j]) == 0) {
        flag = 1;
        break;
      }
    }
    if (flag == 0) {
      strcpy(departments[d], employees[i].department);
      d++;
    }
  }

  int department_count[d];
  for (int i = 0; i < d; i++) {
    department_count[i] = 0;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (strcmp(employees[i].department, departments[j]) == 0) {
        department_count[j]++;
      }
    }
  }
  printf("\n\n\n");
  for (int i = 0; i < d; i++) {
    if (department_count[i] != 0) {
      printf("Department %s has %d employees\n", departments[i],
             department_count[i]);
    }
  }
}

int main() {
  int n;
  printf("Enter the number of employees: ");
  scanf("%d", &n);

  struct Employee *employees =
      (struct Employee *)malloc(n * sizeof(struct Employee));

  for (int i = 0; i < n; i++) {
    printf("Enter the details of employee %d\n", i + 1);
    printf("Enter the employee code: ");
    scanf("%d", &employees[i].code);
    printf("Enter the name: ");
    scanf("%s", employees[i].name);
    printf("Enter the salary: ");
    scanf("%f", &employees[i].salary);
    printf("Enter the department: ");
    scanf("%s", employees[i].department);
    printf("Enter the date of joining (day, month, year): ");
    scanf("%d %d %d", &employees[i].date_of_joining.day,
          &employees[i].date_of_joining.month,
          &employees[i].date_of_joining.year);
  }

  int choice;
  while (1) {
    printf("\n\n\n");
    printf("1. Display the employee information while getting the maximum and "
           "minimum salary.\n");
    printf("2. Display the employee records in ascending order according to "
           "their salary.\n");
    printf("3. Display the employee records in ascending order according to "
           "their date of joining.\n");
    printf("4. Display the department wise employment records.\n");
    printf("5. Exit.\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      displayEmployeeInfo(employees, n);
      break;
    case 2:
      displayEmployeeRecords(employees, n);
      break;
    case 3:
      displayEmployeeRecordsByJoiningDate(employees, n);
      break;
    case 4:
      displayDepartmentWiseEmploymentRecords(employees, n);
      break;
    default:
      return 0;
    }
  }
}
