#include <stdio.h>

float result(float cp, float sp)
{
    float d = ((sp - cp) / cp) * 100;
    return d;
}

int main()
{
    float gui, table, total, slr;
    printf("Enter price of guitar: ");
    scanf("%f", &gui);

    printf("Enter price of table: ");
    scanf("%f", &table);

    total = gui + table;

    printf("Enter selling price of items: ");
    scanf("%f", &slr);

    if (slr > total)
    {
        printf("You made a profit of %.2f%%.\n", result(total, slr));
    }
    else if (slr < total)
    {
        printf("You incurred a loss of %.2f%%.\n", result(total, slr));
    }
    else
    {
        printf("No profit or loss.\n");
    }

    return 0;
}
