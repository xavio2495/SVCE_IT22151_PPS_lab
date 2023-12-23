#include <stdio.h>
#define C 3

void zigZagMatrix(int arr[C][C], int n, int m)
{
    int row = 0, col = 0;
    int row_inc = 0;
    int mn = (n<m) ? n : m;
    for (int len = 1; len <= mn; ++len)
    {
        for (int i = 0; i < len; ++i)
        {
            printf("%d ", arr[row][col]);

            if (i + 1 == len)
                break;
            if (row_inc)
                ++row, --col;
            else
                --row, ++col;
        }

        if (len == mn)
            break;
        if (row_inc)
            ++row, row_inc = 0;
        else
            ++col, row_inc = 1;
    }
    if (row == 0)
    {
        if (col == m - 1)
            ++row;
        else
            ++col;
        row_inc = 1;
    }
    else
    {
        if (row == n - 1)
            ++col;
        else
            ++row;
        row_inc = 0;
    }
    int MAX = (n > m) ? n - 1 : m - 1;
    for (int diag = MAX; diag > 0; --diag)
    {

        int len = diag > mn ? mn : diag;

        for (int i = 0; i < len; ++i)
        {
            printf("%d ", arr[row][col]);

            if (i + 1 == len)
                break;
            if (row_inc)
                ++row, --col;
            else
                ++col, --row;
        }
        if (row == 0 || col == m - 1)
        {
            if (col == m - 1)
                ++row;
            else
                ++col;

            row_inc = 1;
        }
        else if (col == 0 || row == n - 1)
        {
            if (row == n - 1)
                ++col;
            else
                ++row;

            row_inc = 0;
        }
    }
}

int main()
{
    int matrix[][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    printf("Zig-Zag\n");
    zigZagMatrix(matrix, 3, 3);

    return 0;
}
