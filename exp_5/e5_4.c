/*Calculate the Mean, Variace, and SD of a N values using
the following formulae:
    a) Mean as the average of the values
    b) Variance  s² = [Σ(X- x̄)²] / N-1
    c)SD= s(Square root of Var)
*/
#include <stdio.h>
#include <math.h>// Using math.h library for functions like pow(), sqrt()
void main()
{
    float m=0,v=0,sd=0; //using float datatype as we are using division and squareroot
    int n;
    printf("\nEnter the number of values:");
    scanf("%d", &n);//getting user input for total number of values
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter %d val:",i+1);
        scanf(" %d", &a[i]);//getting values from user
        m+=a[i];//getting total of all values
    }
    m/=n;//calculating mean
    for(int i=0;i<n;i++)
    {
        v+= pow((a[i]-m),2)/n;//calculating variance
    }
    sd=sqrt(v);//calculating  SD
    printf("\n\nThe mean of the give array of values is:%f",m);
    printf("\n\nThe variance of the give array of values is:%f",v);
    printf("\n\nThe SD of the give array of values is:%f",sd);

}