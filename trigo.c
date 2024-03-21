#include <stdio.h>
#include <math.h>
int main()
{
    float degree = 0.0;
    printf("Enter Degree:");
    scanf("%f", &degree);
    printf("sine:%f \n", sin(degree));
    printf("cosine:%f\n", cos(degree));
    printf("tangent:%f\n", tan(degree));
    printf("cosecant:%f\n", 1.0 / (degree));
    printf("secant:%f\n", 1.0 / cos(degree));
    printf("cotangent:%f\n", 1.0 / tan(degree));

    return 0;
}