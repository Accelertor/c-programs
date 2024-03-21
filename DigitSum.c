#include <stdio.h>

int main()
{
    int input = 0, sum = 0;
    printf("Enter a 5 digit Number:");
    scanf("%d", &input);
    while (input != 0)
    {
        int ren = 0;
        ren = input % 10;
        sum += ren;
        input = input / 10;
        // printf("%i\n", sum);
    }

    printf(" The Sum is %i   \n ", sum);
    return 0;
}