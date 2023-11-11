/*"This  Month”  is  an  application  that  reads  a  number  between  1  and  12 
and prints the numbers of days in that month. For example, if it reads 3, 
it  displays  31.  Develop  the  application  ‘This  Month’.  Take  care  of  Leap 
years. (Use if-else)*/

#include <stdio.h>
void main()
{
    printf("\n\n\tNumber of days in a month of a year calculator\n");
    int month, days = 0;
    printf("\nEnter month:");
    scanf("%d", &month);//User input for month
    if(month==2){ //special condition if month is 2, as number of days changes if its a leap year
        int year;
        printf("\nEnter the year:");
        scanf("%d", &year); //User input for year
        if((year%400==0 && year%100==0)||(year%4==0 && year%100!=0))//leap year condition
        {days=29;}
        else{days=28;}
    }else if(month==4||month==6||month==9||month==11){//Checking if the month is April, June, September or November as they have 30 days
        days=30;
    }else{//Rest of the months have 31 days, so dont worry
        days=31;
    }
    
    printf("\n\nNumber of days in the %d month is %d", month, days);
}