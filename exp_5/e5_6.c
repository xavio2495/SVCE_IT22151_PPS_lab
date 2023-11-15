/*Read the marks scored by M students in N subjects and perform the
following:
a) Calculate the subject-wise maximum marks
b) Calculate the total of each student
c) Find the row index of the topper student
d) Find the grand total of all marks of all students */

#include <stdio.h>
void main()
{
    int m, n;
    printf("\nEnter the number of students:");
    scanf("%d", &m);
    printf("\nEnter the number of subjects:");
    scanf("%d", &n);

    // Getting user input
    int a[m][n], sub[n], stud[m], grand_sum = 0;
    for (int i = 0; i < m; i++)//rows are students
    {
        printf("\nEnter marks for student %d:\n", i + 1);
        for (int j = 0; j < n; j++)//Columns are subjects
        {
            printf("\tEnter the mark for subject %d:", j + 1);
            scanf("%d", &a[i][j]);
            grand_sum += a[i][j];
            sub[j] = a[0][j];
            stud[i] = 0;
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Calculating the subject-wise maximum marks
            if (a[i][j] > sub[j])
                sub[j] = a[i][j];
            // Calculating the total of each student
            stud[i] += a[i][j];
        }
    }

    //Printing the subject-wise maximum marks
    for(int j=0;j<n;j++)
        printf("\nMaximum mark in Subject %d is %d",j+1,sub[j]);
    printf("\n\n");

    // Finding the Row index of the class topper
    int topper = stud[0], index = 0;
    for (int i = 0; i < m; i++)
    {
        if (stud[i] > topper)
        {
            topper = stud[i];
            index = i;
        }
        //Printing the total of each student
        printf("\nTotal marks of Student %d is : %d",i+1,stud[i]);
    }
    printf("\n\nTop score of the class is:%d\nRow index of the topper student is:%d", topper, ++index);
    printf("\n\nGrand total of all marks: %d",grand_sum);
}