/*Copy contents from one txt file to another using C program*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void main()
{
    FILE *fp1, *fp2;
    char s[50];
    printf("\n\nCopying contents from one file to another\n");
    fp1 = fopen("student.txt", "r");
    fp2 = fopen("stu.txt", "w");
    (fp1 == NULL) ? exit(1) : printf("File 1 exists\n");
    (fp2 == NULL) ? exit(1) : printf("File 2 exists\n");
    while(fgets(s,50,fp1)!=0)
    fprintf(fp2,"%s",s);
    fclose(fp2);
    fclose(fp1);
}
