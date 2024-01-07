/*Create a structure DOB <Day,month,year>. Include this as a sub structure 
in  STUDENT  and  read  and  print  the  DOB  a  student  along  with  other 
details.*/
#include <stdio.h>
struct student {
  char name[10];
  int roll;
  char gender;
  struct dob {
    int day;
    int month;
    int year;
  } dob;
} s;

void main() {
  printf("Enter Name: ");
  scanf("%s", s.name);
  printf("Enter Roll number: ");
  scanf("%d", &s.roll);
  printf("Enter Gender (M/F): ");
  scanf(" %c", &s.gender);
  printf("Enter Date Of Birth\n");
  printf("Day: ");
  scanf("%d", &s.dob.day);
  printf("Month: ");
  scanf("%d", &s.dob.month);
  printf("Year: ");
  scanf("%d", &s.dob.year);

  printf("\n DETAILS\n");
  printf("Name: %s\n", s.name);
  printf("Roll number: %d\n", s.roll);
  printf("Gender (M/F): %c\n", s.gender);
  printf("Date Of Birth: %d-%d-%d\n", s.dob.day, s.dob.month, s.dob.year);
}