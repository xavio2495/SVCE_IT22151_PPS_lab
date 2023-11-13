/*Calculate the Mean, Variace, and SD of a N values using
the following formulae:
    a) Mean as the average of the values
    b) Variance  s² = [Σ(X- x̄)²] / N-1
    c)SD= s(Square root of Var)
*/
#include <stdio.h>
#include <math.h>
void main()
{
    float m=0,v=0,sd=0;
    int n;
    printf("\nEnter the number of values:");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter %d val:");
        scanf("%d", &a[i]);
        m+=a[i];
    }
    for(int i=0;i<n;i++)
    {
        v+= (pow((a[i]-m),2)/n);
    }
    sd=sqrt(v);
    printf("\n\nThe mean of the give array of values is:%f",m);
    printf("\n\nThe variance of the give array of values is:%f",v);
    printf("\n\nThe SD of the give array of values is:%f",sd);

}