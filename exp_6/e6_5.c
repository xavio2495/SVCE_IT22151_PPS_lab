/*The strength of a name is the sum of the ASCII values of its characters. 
Find the strength of a name. */

#include <stdio.h>
#include <string.h>//puts() and gets() are part of this library
void main()
{
    char n[50];//initialising string to get input
    int s=0;
    printf("\n\nEnter a string:");
    fgets(n,sizeof(n),stdin);//name input
    for(int i=0; i<strlen(n)-1;i++){
        int c = n[i];
        s+=c;
    }
    printf("\nThe strength of the string calculator\n\n String: %s \n Strength :%d",n,s);
}