/*Assume SVCE mark entry portal has facility to enter the ESE marks and its 
equivalent  in  words  by  the  teacher.  However,  the  teachers  wish  that  it 
would be great if  the marks in number are converted to  their words by 
the software. Can you please develop a C program for the same? Marks 
range from 0 -100.  Sample: 81 – Eight One*/

#include <stdio.h>
void main()
{

    int num, val, c, r = 0;
    
    char a2[10][6] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};//initialising the text
    printf("\n\n\tNum to Text converter\n");
    printf("Enter the ESE mark:");
    scanf("%d", &num);//getting input from user
    while (num != 0)//reversing the digits (necessary for proper iteration)
    {
        c = num % 10;//gets the last digit from number
        r = r * 10 + c;//adds the digit with respect to face value
        num /= 10;//remove the digit from the number
    }

    while (r != 0)
    {
        val = r % 10;//gets the last digit of the reversed number
        printf("%s  ", a2[val]);//printing the numerical text of the number
        r /= 10;//removing the digit from the reversed number
    }
}