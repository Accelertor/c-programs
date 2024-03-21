#include <stdio.h>
int main()
{
    float bp, np, pf;
    printf("Enter your basic pay:  ");
    scanf("%f", &bp);
    pf = 0.0833 * bp;
    np = bp + (0.25 * bp) + (0.15 * bp);
    printf("your gross pay is %f", np - pf);
}