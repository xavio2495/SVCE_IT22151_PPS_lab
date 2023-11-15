/*Dr. Sudha marks daily attendance of N students as a sequence of ‘P’ and
‘A’ for present and absent respectively. Help her to find the number of
present and absentees for a day. */

#include <stdio.h>
void main()
{
    int n, p = 0, a = 0;
    char c;
    printf("\nEnter the number of students:");
    scanf("%d", &n);//user input on number of students in the class
    for (int i = 1; i <= n; i++)//iterating till n value
    {
        printf("student %d - ", i);
        scanf(" %c", &c); // getting user input ('P', 'A')
        (c == 'P' || c == 'p') ?++p:++a;//ternary operator to check for 'P' or 'p'
    }

    printf("\nThe number of students present is: %d", p); // printing no. of students present
    printf("\nThe number of students absent is: %d", a);  // printing no. of students absent

}