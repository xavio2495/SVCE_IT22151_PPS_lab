/*Read a square a and an element e in it, write a program to print the
elements adjacent to e. Ensure the following:
a) e should be present in the a
b) If e is a boundary elements, do not overshoot/undershoot the
indices*/

#include <stdio.h>
void main()
{
    int a[3][3];
    printf("\nTo find adjacent element in 3x3 a\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nEnter value for a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]); // getting elements of 3x3 matrix from the user
        }
    }

    int e,chk=0;
    printf("\nEnter the element to search adjacent for:");
    scanf(" %d", &e); // getting element to be searched

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (a[i][j] == e)
            {
                chk=1;
                // Print adjacent elements if they exist
                if (i > 0)
                    printf("Above: %d\n", a[i - 1][j]);
                if (i < 2)
                    printf("Below: %d\n", a[i + 1][j]);
                if (j > 0)
                    printf("Left: %d\n", a[i][j - 1]);
                if (j < 2)
                    printf("Right: %d\n", a[i][j + 1]);
                if (i == j)
                {
                    printf("Diagonal: %d,%d,%d,%d", a[0][0], a[0][2], a[2][0], a[2][2]);
                    break;
                }
                if (i + j == 2 || i + j == 0)
                    printf("Diagonal: %d\n", a[1][1]);
                if (i + j == 1)
                    printf("Diagnonal: %d, %d", a[j][i], a[i + 1][j + 1]);
                if (i + j == 3)
                    printf("Diagnonal: %d, %d", a[j][i], a[i - 1][j - 1]);
            }
            
        }
    }
    (chk==0)?printf("\nElement not found, terminating the program"):printf("\n");
}