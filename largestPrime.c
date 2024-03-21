#include <stdio.h>
int main()
{
    int num = 0, isPrime = 0;
    printf("Enter Number\n");
    scanf("%i", &num);
    while (num % 2 == 0)
    {
        num /= 2;
    }

    for (int i = 3; i <= num; i + 2)
    {
        if (num % i == 0)
        {
            for (int j = 2; j <= i; j++)
            {
                if (i % j == 0)
                {
                    isPrime = 1;
                }
            }
        }

        if (isPrime == 1)
        {
            printf("Prime Number=%i", i);
        }
    }
    return 0;
}