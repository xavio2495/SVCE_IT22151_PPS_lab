/*Calculate the daily wage of a labour taking into account the pay per day, 
number of hours worked, TA, and DA. */

#include <stdio.h>
void main()
{
    int pph,hw;//pay-per-hour and hours-worked
    printf("\tDAILY WAGE CALCULATOR\nTA set at 30%% of pay per day\nDA set at 15%% of pay per day\n\nEnter the pay per day:");
    scanf("%d",&pph);
    printf("\nEnter the number of hours worked:");
    scanf("%d",&hw);
    int total = pph*hw; //calculating total amount for the hrs worked
    int ta= 0.3*total; //calculating Transport allowance [ta]
    int da= 0.15*total;//calculating Dearness allowance [da]
    printf("\n\nBase amount=%d\nTransport allowance=%d\nDearness allowance=%d\nTotal=%d",total,ta,da,total+da+ta);
    
}