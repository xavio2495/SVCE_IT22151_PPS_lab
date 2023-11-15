/*
Read a string and check if it’s a palindrome. (Using and without using
library functions)
*/
#include <stdio.h>
#include <string.h>
void main()
{
    char str[20];
    int flag = 0;
    printf("Enter a string: ");
    scanf("%s", str);//user input

    // Compare characters from the start and end of the string and stop if a mismatch is found or the middle of the string is reached.
    for (int i = 0; i < strlen(str) / 2; i++)
    {
        if (str[i] != str[strlen(str) - i - 1])
        {
            flag = 1;
            break;
        }
    }
    
    if (flag)//Palindrome check
    {
        printf("%s is not a Palindrome\n", str);
    }
    else
    {
        printf("%s is a Palindrome\n", str);
    }
}