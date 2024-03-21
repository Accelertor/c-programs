#include <stdio.h>

int main()
{
    int v, l;

    printf("Enter two numbers v and l one by one \n : ");
    scanf("%d", &v);
    scanf("%d", &l);

    if (v != 0 && l % v == 0)
    {
        printf("%d is a factor of %d.\n", v, l);
    }
    else
    {
        printf("%d is not a factor of %d.\n", v, l);
    }

    return 0;
}
