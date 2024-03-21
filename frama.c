#include <stdio.h>
int main()
{
    int n;
    printf("enter day Number bw 0-6 ");
    scanf("%d", &n);
    char days[7][9] = {
        "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    printf("Day is %s\n", days[n]);
    switch (n)
    {
    case 1:
        printf("today is coach");
        break;
    case 4:
        printf("today is coach");
        break;
    default:
        break;
    }
}