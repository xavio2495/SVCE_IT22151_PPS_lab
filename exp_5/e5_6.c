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

    int a[m][n], sub[n], stud[m], grand_sum = 0, topper=0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the mark for %d subject for %d student:", j + 1, i + 1);
            scanf("%d", &a[i][j]);
            grand_sum+=a[i][j];
        }
    }

}