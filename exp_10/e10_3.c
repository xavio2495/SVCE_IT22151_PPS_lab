/*Read <roll, Name,GPA> of a student from console and write into a file
student.txt  */
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, rollno;
    char name[50];
    float gpa;
    FILE *fptr;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    fptr = fopen("student.txt", "w");
    fprintf(fptr, "%-3s | %-10s | %-10s\n", "roll", "name", "gpa");
    for (int i = 0; i < n; i++)
    {
        printf("Enter name: ");
        scanf(" %s", name);
        printf("Enter roll no.: ");
        scanf(" %d", &rollno);
        printf("Enter GPA: ");
        scanf(" %f", &gpa);
        fprintf(fptr, " %-3d | %-10s | %-10.2f\n", rollno, name, gpa);
    }
    fclose(fptr);
}
