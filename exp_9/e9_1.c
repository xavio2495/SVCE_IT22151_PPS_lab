/*Create  functions  of  prototypes  print_int(int),
print_float(float), print_char(char),print_string(char
*).  Define  the  functions  with  only  printf().  Read  your  roll_no,  GPA,
gender, and name and use the prototypes to print them. */
#include <stdio.h>
void print_int(int num)
{
    printf("Roll Number: %d\n", num);
}
void print_float(float num)
{
    printf("GPA: %.2f\n", num);
}
void print_char(char ch)
{
    printf("Gender: %c\n", ch);
}
void print_string(char *str)
{
    printf("Name: %s\n", str);
}
void main()
{
    int roll_no;
    float GPA;
    char gender, name[50];
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Roll Number: ");
    scanf("%d", &roll_no);
    printf("Enter GPA: ");
    scanf("%f", &GPA);
    printf("Enter Gender (M/F): ");
    scanf(" %c", &gender);
    printf("\n\n\tDisplaying details\n");
    print_int(roll_no);
    print_float(GPA);
    print_char(gender);
    print_string(name);
}
