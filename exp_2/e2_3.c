/*Kumar  has  Rs.x  and  Sheela  has  Rs.y.  Both  exchange  their  amounts. 
Simulate this as an interactive C program.*/

#include <stdio.h>
void main()
{
    int kumar, sheela, temp = 0;
    printf("Enter the amt which Kumar and Sheela have:\n");
    scanf("%d%d", &kumar, &sheela);
    temp = kumar; //value which the var kumar has is assigned to var temp
    kumar = sheela; // value of var sheela is assigned to var kumar [old value gets replaced]
    sheela = temp; //value of var sheela is replaced by the value in var temp [which that the old value of var kumar]
    printf("The amt which Kumar and Sheela have after exchanging is:\n");
    printf("Kumar:%d", kumar);
    printf("\nSheela:%d", sheela);
}