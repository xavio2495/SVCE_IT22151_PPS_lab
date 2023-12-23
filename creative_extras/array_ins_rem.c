#include <stdio.h>

void main()
{
    int n;
    printf("\nEnter the number of elements in the array:");
    scanf("%d", &n); // 5

    int a[n + 1]; // 6
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter value %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Inserting value at a specified position
    int pos, val, temp;
    printf("\nEnter value to insert:");
    scanf("%d", &val);
    printf("Enter position to insert:"); 
    scanf("%d", &pos);

    for (int i = n; i>pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = val;

    // printing the new array after inserting
    printf("Array after insertion:\n");
    for (int i = 0; i <= n; i++)
    {
        printf("%d\t", a[i]);
    }

    // Deleting element in array
    int dval, flag = 0;
    printf("\n\nEnter value to delete:");
    scanf("%d", &dval);

    for (int i = 0; i <= n; i++)
    {
        if (a[i] == dval)
        {
            flag=1;
        }
        if(flag==1)
        {
            a[i]=a[i+1];
        }
    }

    //Printing the array
    printf("Array after deleting element\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
