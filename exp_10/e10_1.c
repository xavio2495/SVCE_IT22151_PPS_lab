/*Read a sentence from console and write into a file out.txt. Read out.txt,
change the case of each character, and write in console*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void main()
{
    FILE *fp1, *fp2;
    char str[50], ch;
    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);
    fp1 = fopen("out.txt", "w");
    if (fp1 == NULL)
    {
        puts("File does not exist..");
        exit(1);
    }
    fprintf(fp1, "%s", str);
    fclose(fp1);
    fp2 = fopen("out.txt", "r");
    (fp2 == NULL) ? exit(1) : printf("File exists\n\nString: ");
    while ((ch = fgetc(fp1)) != EOF)
    (isupper(ch)==1)?printf("%c",tolower(ch)):printf("%c",toupper(ch));
    fclose(fp2);
}
