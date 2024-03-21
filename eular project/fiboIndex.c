#include <stdio.h>
int main()
{
    int arr[25];
    arr[0] = 0;
    arr[1] = 1;
    int maxFib = 0;
    int i = 2;
    int len = sizeof(arr) / sizeof(arr[0]);
    while (maxFib != 25)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        if (arr[i] > maxFib)
        {
            printf("%d,%d\n", i, arr[i]);
            maxFib = arr[i];
            i++;
        }
    }
    int k = -1;
    for (int i = 0; i < 25; i++)
    {
        if (arr[i] == 1000)
        {
            k = i;
            break;
        }
    }
    printf("%d\n", k);
}