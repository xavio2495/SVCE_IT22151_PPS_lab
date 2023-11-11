/*Develop a ‘Kids Laptop’ with minimum of 10 English letters to display A 
says  Apple,  B  says  Ball...  Enable  the  kids  to  learn  both  upper  and  lower 
case letters with same word. (Use switch case clustering)*/
#include <stdio.h>
void main()
{
    char x;
    printf("\n\n\tKIDS LAPTOP\n");
    printf("\nEnter the alphabet");
    scanf("%c", &x);//getting alphabet as input, notice that we use "%c" here
    printf("\n\n");
    switch (x) //same long ass switch case 
    {
    case 'A':
    case 'a':
        printf("Apple");
        break;
    case 'B':
    case 'b':
        printf("Ball");
        break;
    case 'C':
    case 'c':
        printf("Cat");
        break;
    case 'D':
    case 'd':
        printf("Doll");
        break;
    case 'E':
    case 'e':
        printf("Elephant");
        break;
    case 'F':
    case 'f':
        printf("Fox");
        break;
    case 'G':
    case 'g':
        printf("Grapes");
        break;
    case 'H':
    case 'h':
        printf("Horse");
        break;
    default:
        printf("Try again..");
    }
}