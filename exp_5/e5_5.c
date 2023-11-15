/*Read a square matrix and an element e in it, write a program to print the
elements adjacent to e. Ensure the following:
a) e should be present in the matrix
b) If e is a boundary elements, do not overshoot/undershoot the
indices*/

#include <stdio.h>
int main()
{
    int a[3][3];
    printf("\nTo find adjacent element in 3x3 matrix\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nEnter value for a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int val;
    printf("\nEnter the element to search adjacent for:");
    scanf("%d", &val);
    int k,m;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if( val == a[i][j]){
                k=i;
                m=j;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {

    }
}