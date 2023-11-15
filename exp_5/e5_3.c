/*Prof. Vimal is interested in forming project teams as a triplet of every
alternate student in his class. Say, if 10,11,12,13,14,15 are the roll
numbers of the students, then team_1 will be (10,12,14) and team_2 will
be (11,13,15). Automate this team formation to Vimal when he gives the
class size and the roll numbers. Ensure that this is possible only when the
class size if a multiple of three. */

#include <stdio.h>
void main()
{
    int n;
    printf("\n\nEnter the number of students in the class:");
    scanf("%d", &n);
    if (n % 3 == 0)
    {
        n /= 3;
        int a[n][3];

        for (int i = 0; i < 3; i++)//columns
        {
            for (int j = 0; j < n; j++)//rows
            {
                printf("\nEnter roll:");
                scanf(" %d", &a[j][i]);
            }
        }

        printf("\n");
        for (int i = 0; i < n; i++)
        {
            printf("group %d:\n", i + 1);
            for (int j = 0; j < 3; j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n\n");
        }
    }
    else
    {
        printf("Terminating program, as class size is not multiple of 3");
    }
}