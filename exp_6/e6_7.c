/*
Print a funny pattern like this :
COMPUTER
OMPUTER
MPUTER
PUTER
UTER
TER
ER
R
*/
#include <stdio.h>
#include <string.h> //string.h library used for functions like strlen()
void main()
{
    char s[9] = "COMPUTER";
    for (int i = 0; i < strlen(s); i++)
    {
        for (int j = i; j < strlen(s); j++)
        {
            printf("%c", s[j]);
        }
        printf("\n");
    }
}

/*
NOTE:
    Strings are just like arrays.
*/