#include <stdio.h>

int main()
{
    int DiSqSum = 0, sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum = sum + i;
        DiSqSum = DiSqSum + (i * i);
    }

        printf("\n square of  Sum=%i \n", sum * sum);

    int Sqsum = sum * sum;

    printf("Square digit's  sum=%i \n", DiSqSum);

    int d = Sqsum - DiSqSum;

    printf("difference=%i \n", d);
}
