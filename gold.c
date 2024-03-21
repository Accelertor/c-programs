#include <stdio.h>
#include "Functions/isprime.h"

int findprimeAdder(int x)
{
    for (int i = 2; i < x; i++)
    {
        for (int j = 2; j < x; j++)
        {
            if (i + j == x && isprime(i) && isprime(j))
            {
                printf("%d,%d\n", i, j);
            }
        }
    }
}

int main()
{

    findprimeAdder(100);
}
