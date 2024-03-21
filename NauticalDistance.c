#include <stdio.h>
#include <math.h>
int netsin(double l1; double g1; double l2; double g2)
{
    double a = (sin(l1) * sin(l2) + cos(l1) * cos(l2)) * cos(g2 - g1);
    double d = 3963 * cos(a);
    return d;
}

int main()
{
    double l1, l2, g1, g2;
    printf("Enter latitude and longitude of 1st place \n");
    printf("latitude:");
    scanf("%lf", &l1);
    printf("Longitude:");
    scanf("%lf", g1);
    // 2nd place
    printf("Enter latitude and longitude of 2nd place \n");
    printf("latitude:");
    scanf("%lf", &l2);
    printf("Longitude:");
    scanf("%lf", g1);
    printf("Distance =  %lf:", netsin(l1, g1, l2, g2));
}
/*SOME PROBLEM WITH "netsin"*/