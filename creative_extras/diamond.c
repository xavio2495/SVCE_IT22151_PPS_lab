/*#include <stdio.h>
void main()
{
    printf("enter a number:");
    int m=10;
    scanf("%d",&m);
    if(m%2!=0)
    m+=1;
    int n=m/2;
    for(int i =0;i<=m;i++){

        for(int j=0;j<=m;j++)
        {
            if(j+i==n ||j-i==n || j+i==m+n || i-j==n)
                printf("*");
            else
                printf(" ");
            
        }
        printf("\n");
    }
}*/

#include <stdio.h>

int main() {
    int n=5;n++;
   for (int k = 1; k <= n; k++)
    {
        for (int c = 0; c < n - k; c++)
        {
            printf("     ");
        }

        for (int c = 0; c <= k - 1; c++)
        {
            printf("    *");
        }

        printf("\n\n");
    }
}
