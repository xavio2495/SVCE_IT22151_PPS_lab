/*Read a square matrix and an element e in it, write a program to print the
elements adjacent to e. Ensure the following:
a) e should be present in the matrix
b) If e is a boundary elements, do not overshoot/undershoot the
indices*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[3][3], b[9];
    printf("\nTo find adjacent element in 3x3 matrix\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nEnter value for a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
            b[i + j] = a[i][j];
        }
    }
    int val;
    printf("\nEnter the element to search adjacent for:");
    scanf("%d", &val);
    for (int i = 0; i < 9; i++)
    {
        if (b[i] == val)
        {
            printf("Value exists, proceeding to find adjacent");
        }
        else{
            printf("Value not in given matrix input... terminating program");
            exit(1);
            
        }
    }
}