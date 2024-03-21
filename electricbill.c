#include <stdio.h>

int main()
{
    float n = 0.0, p = 0.0;
    printf("Enter unit consumed:  ");
    scanf("%f", &n);
    if (n <= 100)
    {
        printf("Price =%f", 2 * n);
    }
    else if (n > 100 && n <= 200)
    {
        p = 200 + (1.8 * n);
        printf("Price =%f", p);
    }
    else
    {
        p = 560 + (n * 1.5);
        printf("Price =%f", p);
    }
}