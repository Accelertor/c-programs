#include <stdio.h>

int main()
{
    float wc;
    float p = 0;

    printf("Enter the water consumption in gallons: ");
    scanf("%f", &wc);

    if (wc <= 45)
    {
        p = 0;
    }
    else if (wc <= 75)
    {
        p = (wc - 45) * 4.75;
    }
    else if (wc <= 125)
    {
        p = 30 * 4.75 + (wc - 75) * 7.50;
    }
    else if (wc <= 200)
    {
        p = 30 * 4.75 + 50 * 7.50 + (wc - 125) * 12.25;
    }
    else if (wc <= 350)
    {
        p = 30 * 4.75 + 50 * 7.50 + 75 * 12.25 + (wc - 200) * 16.50;
    }
    else
    {
        p = 30 * 4.75 + 50 * 7.50 + 75 * 12.25 + 150 * 16.50 + (wc - 350) * 20.00;
    }

    printf("Tax Payable: Rs%f\n", p);

    return 0;
}
