#include <stdio.h>

float discount(int x)
{
    float dis;
    if (x > 999)
    {
        dis = x * 0.35;
    }
    else
    {
        dis = x * 0.1;
    }
    return dis;
}

int main()
{
    int n1, n2;
    float sum = 0.0;
    printf("Enter price of book one by one:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    sum += n1 - discount(n1);
    sum += n2 - discount(n2);
    printf("Discount on %d is %f\n", n1, discount(n1));
    printf("Discount on %d is %f\n", n2, discount(n2));
    printf("Total amount paid = %f\n", sum);
}
