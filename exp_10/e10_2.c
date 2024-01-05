/*Read any of the C files from your previous exercises and print the same
on the console.*/
#include <stdio.h>
void main()
{
    char ch[50] = "";
    FILE *fp1;
    fp1 = fopen("out.txt", "r");
    fgets(ch, 50, fp1);
    puts(ch);
    fclose(fp1);
}
