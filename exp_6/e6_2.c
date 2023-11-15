/*A numerologist suggests renaming a person by repeating the vowel in 
the name subsequent to its existing position. Ex: Sivakumar : 
Siivaakuumaar. Write a C program to automate his suggestion.*/

#include <stdio.h>
#include <string.h>//for strlen()
void main()
{
    char s[30];
    printf("\n\nEnter your name:");
    scanf("%s", &s);//getting user input
    printf("\n\n\nYour name is: %s", s);
    printf("\nNumerologist suggestion is: ");
    for (int i = 0; i <= strlen(s); i++)//iterates through every character in the name
    {
        if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u')
        //check is the character is a vowel or not
        {
            printf("%c%c",s[i],s[i]);//everytime the character is a vowel, the character is printed twice
        }
        else{
            printf("%c",s[i]);//if character is a consonant, it is printed once
        }
    }

}