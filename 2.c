#include <stdio.h>

int main()
{
    int a, b, c, max;
    printf("\nEnter Num1 : ");
    scanf("%d", &a);
    printf("Enter Num2 : ");
    scanf("%d", &b);
    printf("Enter Num3 : ");
    scanf("%d", &c);

    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }

    if (c > max)
    {
        max = c;
    }
    printf("\n%d is Greatest\n\n", max);
    return 0;
}