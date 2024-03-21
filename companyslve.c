#include <stdio.h>
int main()
{
    float salary, hra;
    int year;
    printf("Enter salary and yrs 1/1 \n ");
    scanf("%f", &salary);
    scanf("%d", year);
    if (year > 8)
    {
        hra = 0.25 * salary;
        printf("HRA = %f", hra);
    }

    else
    {
        hra = 0.18 * salary;
        printf("hra = ", hra);
    }
}

/*NOT WORKING*/