/*Read  a  complex  number.  Display  the  number  in  the  format  a+ib.  and 
calculate its modulus value as the square root of the sum of squares of a 
and b. (Use sqrt, pow functions)*/
//This
#include <stdio.h>
#include <math.h>
void main()
{

    int a[2]; //2-3i
    printf("\n\nMODULUS OF A COMPLEX NUMBER\nEnter the real value of complex no.:");
    scanf("%d",&a[0]);
    printf("\nEnter the imaginary value:");
    scanf("%d",&a[1]);
    printf("\nThe given complex number is: (%d)+(%d)i",a[0],a[1]);
    int mod= pow(a[0],2)+pow(a[1],2);// a^2 + b^2
    printf("\nThe modulus is:%f",sqrt(mod));//squareroot of (a^2+b^2)
}