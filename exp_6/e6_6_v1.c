/*
Read a string and check if it’s a palindrome. (Using and without using
library functions)
*/
//Complex program for the intelligent fellows :)
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
    
    if (flag==1)//Palindrome check
    {
        printf("%s is not a Palindrome\n", str);
    }
    else
    {
        printf("%s is a Palindrome\n", str);
    }
}

/*
 Explanation of the program (that 'for loop'):

 for (int i = 0; i < strlen(str) / 2; i++)
    {
        if (str[i] != str[strlen(str) - i - 1])
        {
            flag = 1;
            break;
        }
    }
 Let's say the string is "hello", the length of the string would be 5.
    Since strings are like arrays, the values are:
    h | e | l | l | o |
    0 | 1 | 2 | 3 | 4 |

The value i starts at 0 and ends at i<5/2, that is i<2 
(5/2= 2.5, but since i is integer, we choose the nearest smallest value that is 2)

loop 1:
    str[0] != str[5-1-i]
    str[0] != str[4-0]
    str[0] != str[4]
      "h"  != "o"
    this returns as 'true', so flag=1 and the loop stops (as we use 'break;')

Since, flag is 1, the following if statement executes:
    printf("%s is not a Palindrome\n", str);    


*/