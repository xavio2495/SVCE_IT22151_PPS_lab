/*Print your name by initializing and reading from keyboard using char *s.*/

#include<stdio.h>
void main(){
    char s[30];// strings are like arrays, only difference is that in the end of each string, there is a "\0" which is called as terminating character
    printf("Enter your name:");
    scanf("%s",&s);//getting string input using %s
    printf("\nYour name is: %s",s);//printing string input using %s
}

/*
NOTE:
    %s is used to get and print strings when using scanf() and printf()
    there is another way to get input, u will find about it later  (UwU)
*/