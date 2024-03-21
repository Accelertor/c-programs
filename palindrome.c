#include <stdio.h>
#include <math.h>

double multiply(int limit)
{
    int upperLimit = 0, lowerLimit = 0, maxProduct = 0, product = 0;
    upperLimit = pow(10.0, limit) - 1;
    lowerLimit = 1 + upperLimit / 10;
    for (int i = upperLimit; i >= lowerLimit; i--)
    {
        for (int j = i; j >= lowerLimit; j--)
        {
            product = i * j;
            printf("%i  *", i, "%i =", j);

            printf("%i \n", product);
        }
    }
}
int main()
{
    int n = 2;
    multiply(n);
}
