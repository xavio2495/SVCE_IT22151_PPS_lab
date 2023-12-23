/*Read the sales done by 2 salesmen in 5 months for 4 products. Calculate
the total sales done for each product for every month. (Matrix addition) */

#include <stdio.h>

void main()
{
    int s1[4][5], s2[4][5], prod[4]; //Products are rows and Months are colums
    printf("\nTOTAL SALES CALCULATOR\n");

    //Getting user input for Salesman 1
    printf("Enter sales done by Salesman 1\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("\nEnter sale of  product-%d on  month-%d: ", i + 1, j + 1);
            scanf("%d", &s1[i][j]);
        }
        printf("\n");
    }
    //Getting user input for Salesman 2
    printf("\n\nEnter sales done by Salesman 2\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("\nEnter sale of  product-%d on  month-%d: ", i + 1, j + 1);
            scanf("%d", &s2[i][j]);
        }
        printf("\n");
    }

    //Calculating the total sales done for each product for every month and printing the same
    printf("Printing the total sales done for a product in a month:");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++){
            int prod = s1[i][j]+s2[i][j];
            printf("\n\nSales of product %d, in the month %d is : %d",i+1,j+1, prod);        
        }
    }

}