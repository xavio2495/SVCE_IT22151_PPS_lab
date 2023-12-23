/*
Read a string and check if it’s a palindrome. (Using and without using
library functions)
*/
// This is a short and easily understandable code :)
#include <stdio.h>
#include <string.h>
void main()
{
    printf("\nPALINDROME CHECKER");
    char str[20], rev[20]; // initialising two strings str and rev
    printf("\nEnter a string:");
    scanf("%s", str);                                      // getting user input and storing it to "str"
    for (int i = strlen(str) - 1, j = 0; i >= 0; i--, j++) // Check Note-A
    {
        rev[j] = str[i];
    }
    (strcasecmp(rev, str) == 0) ? printf("it is a palindrome") : printf("it is not a palindrome"); // Check Notes pt-2
}

/*
NOTES:

Note-A:
    for (int i = strlen(str) - 1, j = 0; i >= 0; i--, j++)
    in the above for loop, we are initialising two variables (i &j),
    here i holds to value of the length of the string "str", and j is 0.
    Through iteration, i is decreased by one and j is increased by one 

    Let's say the string is "hello", the length of the string would be 5.
    Since strings are like arrays, the values are:
    h | e | l | l | o |
    0 | 1 | 2 | 3 | 4 |

    i= strlen(str) -1 , which would be 5-1 =4 
    (this matches the index of the last character in the string, that is "o"- 4)

    the loop starts with the value of "i" being 4, and "j" being 0.
    loop-1: rev[0]=str[4]  ---o
    loop-2: rev[1]=str[3]  ---l
    loop-3: rev[2]=str[2]  ---l
    loop-4: rev[3]=str[1]  ---e
    loop-5: rev[4]=str[0]  ---h
    
    So, the for loop reverses the given string.. [Yes you can use strrev,but it doesn't work in the lab]

Note-B:
    (strcmp(rev, str) == 0) ?printf("it is a palindrome") : printf("it is not a palindrome"); 

    This is a ternary operator, or else called as the one line if-else statement

    this does the same thing as:

    if(strcmp(rev,str)==0)
    {
        printf("it is a palindrome");
    }
    else
    {
        printf("it is not a palindrome");
    }

    strcmp(rev,str)  :
        This is a function from the string.h library, which compares two strings
        by the ASCII value of each character in the string.
        eg:
        rev="AAA"
        str="ADA"
        
            rev     | str      |  strcmp
         A - 65     | A - 65   |  65-65 =0
         A - 65     | D - 68   |  65-68 = -3
         A - 65     | A - 65   |  65-65 =0   //this is not checked

        The function then returns the value -3 as a integer.

        Which means that, if strcmp() returns 0 as the output, then we can say that
        the two string are equal.



*/