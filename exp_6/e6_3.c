/*Read the first name, middle name, and last name of a person and form a 
full name as the concatenation of them. (Using and without using library 
functions)*/

#include <stdio.h>
#include <string.h>//puts() and gets() are part of this library
void main()
{
    char fn[15],mn[15],ln[15];//initialising strings to get input
    printf("\n\nEnter your first name:");
    gets(fn);//first name input
    printf("\nEnter your middle name:");
    gets(mn);//middle name input
    printf("\nEnter your last name:");
    gets(ln);//last name input

    char name[100]=" ";//initialsing a string where all there names could be merged
    strcat(name,fn);//remember strcat accepts only two strings at the same time
    strcat(name," ");
    strcat(name,mn);
    strcat(name," ");
    strcat(name,ln);
    printf("\n\nFull name is:");
    puts(name);//printing the string
}

/*
NOTE:
1)When we are taking a string as an input using scanf, there is no need to use &
    scanf("%s", &fn); --- & is not needed here
    scanf("%s", fn);  --- This is good enough

2) As you might know puts() and gets() is a new thing in this program, here is
a simple explanation for it
    puts() --is used to get string input
    gets() --is used to print a string
    --Please remember that these function only work for strings and nothing else
*/