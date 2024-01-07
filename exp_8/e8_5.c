//Generate a multiplication table for user input M and N. 
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,m;
    printf("\n\nMULTIPLICATION TABLE");
    printf("\nEnter the number:");
    scanf("%d",&n);
    printf("\nEnter the number of terms: ");
    scanf("%d",&m);
    int *x=&n;
    for(int* i = &n,k=1; i<&n+m;i++,k++)
    {
        printf("\n%d x %d = %d",*x,k,(*x)*(k));
    }
}