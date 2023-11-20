/*To print
        *
      * *
    * * *
  * * * *
* * * * *
*/
//This is a complex pattern to be honest...
//Whenever you are trying to print a pattern, 
//imagine a square matrix grid and work you way through

#include <stdio.h>

void main() {
    int n=5;n++;
    printf("\n\n");
   for (int k = 1; k <= n; k++)//iterates through each row
    {
        for (int c = 0; c < n - k; c++)//to print n-k number of spaces in each row
        {
            printf("    ");
        }

        for (int c = 1; c <=k; c++)//to print k number of *'s in each row
        {
            printf("   *");
        }

        printf("\n\n");
    }
}

/*
    Normal Matrix grid
   | 1 | 2 | 3 | 4 | 5 |
1  |1,1|1,2|1,3|1,4|1,5|
2  |2,1|2,2|2,3|2,4|2,5|
3  |3,1|3,2|3,3|3,4|3,5|       
4  |4,1|4,2|4,3|4,4|4,5|
5  |5,1|5,2|5,3|5,4|5,5|

    Grid for this pattern
   | 1 | 2 | 3 | 4 | 5 |
1  | x | x | x | x |1,5|
2  | x | x | x |2,4|2,5|
3  | x | x |3,3|3,4|3,5|       
4  | x |4,2|4,3|4,4|4,5|
5  |5,1|5,2|5,3|5,4|5,5|
    
    So in this program, you can see that in each row, the number of 'X's decrease and 
    the number of a(i,j) increases

    The logic is as follows:
    -Number of X's (spaces) in a row = order of sq. matrix - a(i)[row value]
    -Number of Stars/a(i,j) in a row = a(i)[row value]
*/