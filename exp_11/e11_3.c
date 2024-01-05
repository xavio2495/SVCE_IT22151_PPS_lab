//Calculate the square and cube of a number using macro functions. 
#include<stdio.h>
# define square(a) (a*a)
# define cube(a) (square(a)*a)

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\nSquare: %d ",square(n));
    printf("\nCube: %d",cube(n));
}