#include <stdio.h>
int main()
{
    int i, j, n, k;
    //Getting size of array
    printf("enter size of array : ");
    scanf("%d", &n);
    int ar[n];
    int tem[n];
    //Getting array values from user
    for (i = 0; i < n; i++)
    {
        printf("enter value %d : ",i+1);
        scanf("%d", &ar[i]);
    }
    printf("Array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
    int c = 0;
    //Removing duplicates
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ar[i] == ar[j])
            {
                for (k = j; k < n - 1; k++)
                {
                    ar[k] = ar[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    //Printing the array after removing duplicates
    printf("Array after removing duplicates:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d", ar[i]);
        printf(" ");
    }
    return 0;
}