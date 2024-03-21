#include <stdio.h>
int main()
{
    int v;
    printf("Enter a number \n :");
    scanf("%d", &v);
    if (v > 700 && v % 77 == 0)
    {
        printf("it a stavence number");
    }
    else if (v < 77 && 700 % v == 0)
    {
        printf("it a stavence number");
    }

    else
    {
        printf("it not stavence number");
    }
    return 0;
}