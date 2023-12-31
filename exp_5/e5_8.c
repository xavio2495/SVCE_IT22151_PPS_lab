/* A shopkeeper delivers rice bags to three shops SHOP1, SHOP2, SHOP3 in quantities of
10kg, 20kg and 30kg for a month. The price of 10kg, 20kg and 30kg bags are Rs 100,
Rs  200  and  Rs  300  respectively.  If  the  shopkeeper  delivers  one  bag  to  each  shop,
calculate the income from the three shops separately. (Vector-Matrix multiplication)

Approach:
Read the quantities sold as a 1*3 vector; treat as quantity per shop row-
wise [1,1,1]
Read the amounts of 10kg, 20kg, and 30kg bags for each shop as a 3*3
matrix; treat shops column-wise
|100|100|100
|200|200|200
|300|300|300
Then the income from each shop as vector-matrix multiplication is
[600,600,600]

(Suggestion: Extend the vector as matrix as sales in 3 months for
complete matrix multiplication) */

#include <stdio.h>
void main()
{
    int x[3][3] = {{100, 100, 100}, {200, 200, 200}, {300, 300, 300}};
    int y[1][3] = {600, 600, 600};
    int c[1][3] = {0, 0, 0};
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                c[i][j] += (y[i][k] * x[j][k]);
            }
            printf("\n Total income from Shop-%d is: %d", j + 1, c[i][j]);
        }
    }
}