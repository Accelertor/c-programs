#include <stdio.h>
#include <stdbool.h>
int isabundantNo(int x)
{
    int sum = 0;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            sum += i;
        }
    }
    if (sum > x)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{

    int sum;
    printf("%d", isabundantNo(12));
    for (int i = 1; i < 28200; i++)
    {
        if (isabundantNo(i))
        {
            continue;
        }
        else
        {
            sum += i;
            // printf("%d\n", i);
        }
    }
    printf("%d\n", sum);
}