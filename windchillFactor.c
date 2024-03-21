#include <stdio.h>
#include <math.h>

int main()
{
    float v, t;
    printf("Enter Wind speed in m/s:");
    scanf("%f", &v);
    printf("Enter temperature in cel:");
    scanf("%f", t);
    float w = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);
    printf("Wind chill factor =%f \n", w);
}