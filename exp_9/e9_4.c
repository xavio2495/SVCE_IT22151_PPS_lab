/*Demonstrate  sorting  N  student  details  using  a  function 
rank_students(student[], n)  based  on  their  GPA.  Use  STUDENT 
<roll_no,name,GPA>*/
#include <stdio.h>
#include <string.h>
#define MAX_NAME_LENGTH 40
void sortGPA(char name[][MAX_NAME_LENGTH], int roll[], float gpa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (gpa[j] < gpa[j + 1])
            {
                float tempGPA = gpa[j];
                gpa[j] = gpa[j + 1];
                gpa[j + 1] = tempGPA;
                int tempRoll = roll[j];
                roll[j] = roll[j + 1];
                roll[j + 1] = tempRoll;
                char tempName[MAX_NAME_LENGTH];
                strcpy(tempName, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], tempName);
            }
        }
    }
}
void main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int roll[n];
    float gpa[n];
    char name[n][MAX_NAME_LENGTH];
    for (int i = 0; i < n; i++)
    {
        printf("Enter student_%d name: ", i + 1);
        scanf("%s", name[i]);
        printf("Roll number of %s: ", name[i]);
        scanf("%d", &roll[i]);
        printf("GPA of %s: ", name[i]);
        scanf("%f", &gpa[i]);
    }
    sortGPA(name, roll, gpa, n);
    printf("\n%-10s%-20s%-5s\n", "ROLL NO", "Name", "GPA");
    for (int i = 0; i < n; i++)
    {
        printf("%-10d%-20s%-5.2f\n", roll[i], name[i], gpa[i]);
    }
}