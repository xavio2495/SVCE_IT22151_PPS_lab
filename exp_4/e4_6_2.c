/*To print
1
2  3
4  5  6
7  8  9  10
11 12 13 14 15*/
//Whenever you are trying to print a pattern, imagine a square matrix grid and work you way through

#include <stdio.h>
void main()
{
    int n = 1;//Since each value in this traingle matrix is different, we needs
    for (int i = 1; i <= 5; i++)//iterates through row values
    {
        for (int j = 1; j <= i; j++)//iterates through column values
        {
            printf("%d\t", n);//printing n
            n++;//adds one to n... works the same as n=n+1
        }
        printf("\n");//to move to next line/row
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
1  |1,1|   |   |   |   |
2  |2,1|2,2|   |   |   |
3  |3,1|3,2|3,3|   |   |       
4  |4,1|4,2|4,3|4,4|   |
5  |5,1|5,2|5,3|5,4|5,5|
    you can notice in the last cofactor a(i,j) of each row ,
    the row=column (1,1),(2,2),(3,3),(4,4),(5,5).
    For this pattern we are printing the value of n, which increases for every column loop (j-loop)
*/