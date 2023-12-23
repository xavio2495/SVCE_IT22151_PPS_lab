// Fibonacci till 50 digitd using function recursion
#include <stdio.h>
int a = 0, b = 1, c;
int f(int n)
{
    if (n > 0)
    {
        c = a + b;
        a = b;
        b = c;
        printf("\t%d", c);
    }
    else
    {
        return 0;
    }
    f(n - 1);
}
void main()
{
    int val;
    printf("Enter a number of digits for fibonacci:");
    scanf("%d", &val);
    printf("\n%d\t%d", a, b);
    f(val - 2);
}
