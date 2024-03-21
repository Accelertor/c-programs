#include <stdio.h>



int BoundarySum(int a[][4], int m, int n)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
            {
                sum += a[i][j];
            }
        }
    }
    return sum; 
}

int main()
{
    int a[4][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {1, 2, 3, 4},
                   {5, 6, 7, 8}};

     int sum = BoundarySum(a, 4, 4);
    printf("%d\n", sum);
    return 0;
}
