/*Read a name and count the number of vowels in it*/

#include <stdio.h>
#include <string.h>//using string.h library to access functions like strlen()
void main()
{
    char s[30];
    int c=0;
    printf("\n\nEnter your name:");
    scanf("%s", &s);//getting string input
    printf("\nYour name is: %s", s);

    for (int i = 0; i <= strlen(s); i++)//iterating through each character in a string eg: "hello" --> "h","e","l","l","o"
    {
        if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u')
        //checking if the given character is a vowel or not (checks both upper and lowercase)
        {
            ++c; //c is the counting variable, which increments by one, each time the condition is true
        }
    }
    printf("\nThe number of vowels in your name is:%d",c);//printing how many vowels are there in the string
}