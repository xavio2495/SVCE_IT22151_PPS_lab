#include <stdio.h>
int main()
{
    int i, j, n, k;
    printf("enter size of array : ");
    scanf("%d", &n);
    int ar[n];
    int tem[n];
    for (i = 0; i < n; i++)
    {
        printf("enter value %d : ",i+1);
        scanf("%d", &ar[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", ar[i]);
        printf(" ");
    }
    printf("\n");
    int c = 0;
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
    for (i = 0; i < n; i++)
    {
        printf("%d", ar[i]);
        printf(" ");
    }
    return 0;
}