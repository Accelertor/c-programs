#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, r, theta;
    printf("Enter x corrdinates:");
    scanf("%lf", &x);
    printf("Enter y corrdinates:", &y);
    scanf("%lf", &y);
    r = sqrt(pow(x, 2) + pow(y, 2));
    theta = atan2(y, x);
    printf("polar coordinates: %lf,%lf degrees \n", r, theta);
}