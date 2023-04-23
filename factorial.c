#include <stdio.h>
int factorial();
int main()
{
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    printf("Factorial of %d is : %d\n", num, factorial(num));
    return 0;
}

int factorial(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x-1);
    }
}