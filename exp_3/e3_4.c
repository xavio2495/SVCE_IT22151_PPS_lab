/*‘Solar  System’  is  an  application  that  reads  a  number  between  1  and  9 
and  prints  the  respective  planet.  For  example,  if  it  reads  3,  it  displays 
‘Venus’. Develop the application Solar System. (simple switch)*/
//This program is too damn long, bear with it ffs

#include <stdio.h>
void main()
{
    int x;
    printf("\n\n\tSOLAR SYSTEM\n");
    printf("\nEnter the numerical order of the planet:");
    scanf("%d", &x);//getting the number of the planet eg: 3 for earth
    printf("\n\n");
    switch (x) //printing respective planet for the number given
    {
    case 1:
        printf("Mercury");
        break; //dont forget this, as this is used to say that case (n) ends with this line
    case 2:
        printf("Venus");
        break;
    case 3:
        printf("Earth");
        break;
    case 4:
        printf("Mars");
        break;
    case 5:
        printf("Jupiter");
        break;
    case 6:
        printf("Saturn");
        break;
    case 7:
        printf("Uranus");
        break;
    case 8:
        printf("Neptune");
        break;
    default: //this case is executed if no cases match with the input
        printf("That planet does not exist");
        //no need for break for default case
    }
}