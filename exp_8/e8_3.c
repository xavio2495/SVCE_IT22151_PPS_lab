/*Use Dynamic memory allocation to read the marks of N students in a 
subject and find the total, average, maximum, and minimum among 
them.*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int* ptr;
    int n,tot=0,avg,max,min;
    printf("Enter the number of subjects: ");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for(int i=0; i<n;i++)
    {
        printf("Enter mark for subject-%d: ",i+1);
        scanf("%d",&ptr[i]);
        tot+=ptr[i];
    }
    avg=tot/n;
    max=ptr[0];
    min=ptr[0];
    for(int i=0;i<n;i++)
    {
        if(ptr[i]>max)
        max=ptr[i];
        if(ptr[i]<min)
        min=ptr[i];
    }
    printf("\n\nTotal: %d",tot);
    printf("\n\nAverage: %d",avg);
    printf("\n\nMaximum: %d",max);
    printf("\n\nMinimum: %d",min);

}
