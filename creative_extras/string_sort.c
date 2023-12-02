#include <stdio.h>
#include <string.h>

void main()
{
    int m;
    printf("\nEnter the number of strings:");
    scanf("%d", &m);
    char str[m][20];

    for (int i = 0; i < m; i++)
    {
        printf("Enter string %d: ", i+1);
        scanf(" %s",str[i]);
    }
    char temp[20];
    for (int i = m - 1; i > 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            int m = strcasecmp( str[j],str[j+1] ) ;
            if (m > 0)
            {
                strcpy(temp, str[j + 1]);
                strcpy(str[j + 1], str[j]);
                strcpy(str[j], temp);
            }
        }   
    }

    printf("\n\n Sorted strings:\n");
    for(int i =0; i<=m;i++)
    {
        printf("%s\n",str[i]);
    }
}