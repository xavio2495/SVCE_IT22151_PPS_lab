/*Read a sentence from console and write into a file out.txt. Read out.txt, 
change the case of each character, and write in console*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("source.c", "r");
    if (fp1 == NULL)
    {
        puts("File does not exist..");
        exit(1);
    }
    fp2 = fopen("target.c", "w");
    if (fp2 == NULL)
    {
        puts("File does not exist..");
        fclose(fp1);
        exit(1);
    }
    while ((ch = fgetc(fp1)) != EOF)
    {
        ch = toupper(ch);
        fputc(ch, fp2);
    }
    printf("\nFile successfully copied..");
}
