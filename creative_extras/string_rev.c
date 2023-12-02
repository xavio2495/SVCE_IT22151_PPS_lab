#include <stdio.h>
#include <string.h>

void rev(char *s)
{
    char revx[20];
    int len=strlen(s) - 1;
    for (int i = len, j = 0; i >= 0; i--, j++)
    {
        revx[j] = s[i];
    }    
    printf("Reversed string is: %s",revx);
}

void main()
{
    char str[20];
    printf("\nEnter a string:");
    scanf("%s", str);
    rev(str);
}