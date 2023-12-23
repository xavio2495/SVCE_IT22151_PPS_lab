#include <stdio.h>
#include <string.h>
#include <math.h>
// constant value arrays
char n1[10][6] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
char n11[9][14] = {"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
char n10[9][10] = {"ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};

void main()
{
    int x;
    char num[5] = "";
    printf("Enter a number: ");
    scanf("%d", &x);
    int dup = x;
    sprintf(num, "%d", x); // converts int to string 1 -> "1"
    int count = strlen(num);
    for (int i = count; i > 0; i--)
    {
        int c = pow(10, i - 1);
        int val = x / c; // holds value of first digit in number
        x %= c;          // removes that first digit
        if (i == 4)
            printf("%s thousand,", n1[val]);
        if (i == 3)
            printf(" %s hundred and", n1[val]);
        if (i == 2)
        {
            if (val == 1 && dup % 10 != 0)
            {
                printf(" %s", n11[(dup % 10)-1]);
                break;
            }
            if (val == 1 && dup % 10 == 0)
            {
                printf(" %s",n10[0]);
                break;
            }
            else
            {
                printf(" %s", n10[val-1]);
            }
        }
        if (i==1)
        {
            printf(" %s",n1[val]);
        }
    }
}
