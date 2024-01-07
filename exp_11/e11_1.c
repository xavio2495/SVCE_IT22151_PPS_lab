/*Create an enumerator for months of a year, days of a week, and display 
them*/
#include<stdio.h>
enum month{January=1, Febuary, March, April, May, June, July, August, September, October, November, December}m;
enum week{Sun=1, Mon, Tue, Wed, Thur, Fri, Sat}day;
void main()
{
    m=March;
    day=Wed;
    printf("\n\nProgram using ENUM");
    printf("\nMarch in num: %d",m);
    printf("\nWed in num: %d",day);
}