/*Add a new record read from console say <100, Srinivasan,9.8> to
student.txt (append)*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
int  rollno;
char name[50];
float gpa;
FILE *fptr;
fptr=fopen("student.txt","a");
printf("Enter name: ");
scanf(" %s",name);
printf("Enter roll no.: ");
scanf(" %d",&rollno);
printf("Enter GPA: ");
scanf(" %f",&gpa);
fprintf(fptr,"%d. %s - %f\n",rollno,name,gpa);
fclose(fptr);
}