/* Write a program to store and print the roll no, name , age, height and marks
 * (out of 10) in subject CSB101 of a student using structures
 */

#include <stdio.h>
#define STR_LEN 20

struct student {
  int roll;
  char name[STR_LEN];
  int age;
  int height;
  int marks;
};

int main() {
  struct student s;

  printf("Enter the roll no: ");
  scanf("%d", &s.roll);
  printf("Enter the name: ");
  fgets(s.name, STR_LEN, stdin);
  printf("Enter the age: ");
  scanf("%d", &s.age);
  printf("Enter the height: ");
  scanf("%d", &s.height);
  printf("Enter the marks: ");
  scanf("%d", &s.marks);

  printf("\n\n");

  printf("Roll no: %d\n", s.roll);
  printf("Name: %s\n", s.name);
  printf("Age: %d\n", s.age);
  printf("Height: %d\n", s.height);
  printf("Marks: %d\n", s.marks);

  printf("\n\n");

  printf("Size of struct student: %d\n", sizeof(s));
}
