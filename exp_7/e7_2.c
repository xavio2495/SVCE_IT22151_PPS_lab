/*Create  a  structure  STUDENT  with  <Roll_no,Name,Gender,marks[5],
grades[5],GPA>.  Calculate  the  grade  of  each  subject  (assuming  one-to-
one  mapping  of  marks  and  grades)  and  GPA  as  the  average  of  marks
scored by a student.*/

#include <stdio.h>
typedef struct student
{
    char name[30];
    int roll;
    char gender;
    int marks[7];
    float gpa;
    char grade[7];
} stud;
void main()
{
    char subjects[7][11] = {"Tamil", "English", "Maths", "Computer", "Physics", "Chemistry", "E.E.E"};
    stud s;
    // getting student info and marks
    printf("\n\nEnter student details and marks scored");
    printf("\nName: ");
    scanf(" %s", s.name);
    printf("Roll: ");
    scanf("%d", &s.roll);
    printf("Gender (M/F): ");
    scanf(" %c", &s.gender);
    printf("Enter marks for %s (for 100)\n", s.name);
    int sum = 0;
    for (int j = 0; j < 7; j++)
    {
        printf("\t-%s: ", subjects[j]);
        scanf("%d", &s.marks[j]);
        int n = s.marks[j];
        s.grade[j] = (n >= 90) ? 'A' : (n >= 80) ? 'B'
                                   : (n >= 70)   ? 'C'
                                   : (n >= 60)   ? 'D'
                                   : (n >= 50)   ? 'E'
                                                 : 'F';
        sum += n;
    }
    s.gpa = sum / 7;

    // Printing the details with formatting
    printf("\n\nPrinting student details and marks\n\n");

    printf("\nName: %s", s.name);
    printf("\nRoll number: %d", s.roll);
    printf("\nGender: %c", s.gender);
    printf("\nGPA: %.2f", s.gpa);
    printf("\n\tMarksheet");
    for (int j = 0; j < 7; j++)
        printf("\n\t-%s: %d (%c)", subjects[j], s.marks[j], s.grade[j]);
}