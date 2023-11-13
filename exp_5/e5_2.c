/*Dr. Sudha marks daily attendance of N students as a sequence of ‘P’ and
‘A’ for present and absent respectively. Help her to find the number of
present and absentees for a day. */

#include <stdio.h>
void main()
{
    int n, p = 0, a = 0;
    printf("\nEnter the number of students:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char c;
        printf("\nEnter Attendance for student %d", i + 1);
        (c == 'P' || c == 'p') ? p++ : a++;
    }
    printf("\nThe number of students present is: %d", p);
    printf("\nThe number of students absent is: %d", a);
}