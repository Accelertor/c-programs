#include <stdio.h>
int main()
{
    int ori, rev = 0, tmp;
    printf("Enter a number ");

    scanf("%d", &ori);
    while (ori != 0)
    {
        tmp = ori % 10;
        rev = rev * 10 + tmp;
        ori = ori / 10;
    }
    printf("reverse: %i \n", rev);
    return 0;
}