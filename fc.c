#include <stdio.h>
#include <math.h>

int main()
{
    su(myf)
    double limit = 10;
    double pro = 0;
    double ls = 0;
    for (double i = 1; i <= limit; i++)
    {
        ls = log10(ls) + log10(i);
        pro += ls;
    }
    pro=pow(10,pro);
    printf("\n%f!=%f\n", limit, pro);
}