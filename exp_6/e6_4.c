/*Write a C program to design a encryption technology that replaces every
non-vowel character of a string with its subsequent character in a
rotation. Ex: BASKARZ : CATLASA*/
#include <stdio.h>
#include <string.h> //using string.h library to access functions like strlen() and fgets()
void main()
{
    char s[30];
    printf("\n\nEnter your name:");
    fgets(s,sizeof(s),stdin); // getting string input
    printf("\nYour name is: %s", s);
    printf("\nEncrypted name is:\n");

    for (int i = 0; i <= strlen(s); i++) // iterating through each character in a string eg: "hello" --> "h","e","l","l","o"
    {
        if (s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u')
        // checking if the given character is a vowel or not (checks both upper and lowercase)
        {
            printf(" %c", s[i]);//printing the same character if its a vowel
        }
        else //explained in notes
        {
            char x= ++s[i];
            printf(" %c",x);
        }
    }
}

/*
NOTES:
    question: So, wtf is ascii?
    google: ASCII, a standard data-encoding format for electronic communication between computers.
    ASCII assigns standard numeric values to letters, numerals, punctuation marks, and other characters
    used in computers. in full: American Standard Code for Information Interchange.

    So, it could be said that in ascii, all characters are assigned to some number.
    Here is a quick reference table for it

    letter | ASCII
      A-Z  | 65-90
      a-z  | 97-122
      0-9  | 48-57

If we write char c = 'B'+32; then c stores 'b'

Lets, say s[i] holds the value "B"
    -From the table, we know "B" is 66 in ascii
    -char x = ++s[i];
        -char x = 1+s[i]
        -char x = 66 +1
        -char x = 67
        - x= char(67)
        - x= 'C'
    -then 'C' is printed.   
*/