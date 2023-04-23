#include <stdio.h>

int main()
{
    int n = 2, prime = 1;
    if (n <= 1)
    {
        printf("not Prime");
        return 0;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0 && n != 2)
    {
        printf("not Prime");
    }
    else
    {
        printf("Prime");
    }
    return 0;
}