#include <stdio.h>
typedef struct student{
    char name[30];
    int roll;
    char gender;
    int marks[7];
    float gpa;
    char grade[7];
} stud;
void main(){
    char subjects[7][11]={"Tamil", "English","Maths", "Computer", "Physics", "Chemistry", "E E E"};
    // getting number of students
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    stud s[n];
    // getting student info and marks
    printf("\n\nEnter student details and marks scored");
    for (int i = 0; i < n; i++){
        printf("\n\n\tStudent- %d", i + 1);
        printf("\nName: ");
        scanf(" %s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Gender (M/F): ");
        scanf(" %c", &s[i].gender);
        printf("Enter marks for %s", s[i].name);
        int sum = 0;
        for (int j = 0; j < 7; j++){
            printf("\t-%s: ", subjects[j]);
            scanf("%d", &s[i].marks[j]);
            int n=s[i].marks[j];
            s[i].grade[j] = (n>=90)?'A':(n>=80)?'B':(n>=70)?'C':(n>=60)?'D':(n>=50)?'E':'F';
            sum +=n;
        }
        s[i].gpa = sum / 7;
    }
    // Printing the details with formatting
    printf("\n\nPrinting student details and marks\n\n");
    for (int i = 0; i < n; i++){
        printf("\nName: %s", s[i].name);
        printf("\nRoll number: %d", s[i].roll);
        printf("\nGender: %c", s[i].gender);
        printf("\nGPA: %.2f", s[i].gpa);
        printf("\n\tMarksheet");
        for (int j = 0; j < 7; j++)
        printf("\n\t-%s: %d (%c)", subjects[j], s[i].marks[j], s[i].grade[j]);
    }
}