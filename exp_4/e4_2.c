/*An astrologer calculates the day’s fortune as the sum of the numbers in 
the  date  of  birth.  If  the  sum  is  between  1  and  5(both  inclusive),  he 
predicts  the  day  as  ‘Excellent’.  If  the  sum  is  between  6  and  8  (both 
inclusive) he predicts the day as ‘Good’ and if the sum is 9 he predicts the 
day  as  ‘Fair’.  Develop  an  application  for  this  model.  (Hint:  Repeat  the 
process until the sum is a single digit)*/

#include <stdio.h>
void main()
{
    int num, input, val, sum = 0, fsum = 0;
    printf("\n\tFORTUNE CALCULATOR");
    printf("\nEnter date of birth (eg:24092005 for 24/09/2005):"); 
    scanf("%d", &input);//getting user input for DOB
    num = input;
    for (int i = 0; i < 2; i++)//two loops needs to bring 8 digits down to one
    {
        sum = 0;
        while (num != 0)//iterates through the digits and adds them
        {
            val = num % 10; //stores the last digit of the DOB,eg: 5 for 24092005
            sum += val;//adds the digit 
            num = num / 10;//removes the same digit
        }
        num = sum;//assigns the sum of digits to num for second loop
    }
    printf("Fortune number is:%d", sum);
    if (sum <= 5)//checks if sum is less than or equal to 5
    {
        printf("\n\nDay is Excellent");
    }
    else if (sum <= 8)//checks if sum is less than or equal to 8 but greater than 5
    {
        printf("\n\nDay is Fair");
    }
    else//if both conditions are false , then its considered that the number is greater than 8
    {
        printf("\n\nDay is Good");
    }
}