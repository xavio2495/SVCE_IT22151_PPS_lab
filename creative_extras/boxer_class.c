#include<stdio.h>
void main()
{
    float w;
    printf("\n\tBoxer Class Finder\n");
    printf("Enter the boxer's weight(lbs): ");
    scanf("%f",&w);
    if(w<115)
    {
        printf("\nFlyweight");
    }
    else if(w>=115 && w<121)
    {
        printf("\nBantanweight");
    }
    else if(w>121 && w<=153)
    {
        printf("\nFeatherweight");
    }
    else if(w>153 && w<=189)
    {
        printf("\nMiddleweight");
    }
    else
    {
        printf("Heavyweight");
    }
}