/*Write a program that prints the numbers from 1 to 100. But for multiples 
of three print “Fizz” instead of the number and for the multiples of five 
print  “Buzz”.  For  numbers  which  are  multiples  of  both  three  and  five 
print “FizzBuzz”*/

#include <stdio.h>
void main()
{
    printf("\n\tFIZZBUZZ\n");
    for (int i = 1; i <= 100; i++) //for loop to iterate through 1-100 numbers
    {
        if (i % 3 == 0 && i % 5 == 0) //checking if the value is divisible by both 5 and 3
        {
            printf("%d-FizzBuzz \n", i);
        }
        else if (i % 3 == 0) //checking if the value is is divisible by 3
        {
            printf("%d-Fizz \n", i);
        }
        else if (i % 5 == 0)//checking if the value is divisible by 5
        {
            printf("%d-Buzz \n", i);
        }
        else//printing only the number if all the conditions are false
        {
            printf("%d-\n", i);
        }
    }
}