#include <stdio.h>

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j <= (n-1); j--)
        {
            printf("%d", n);
        }
        printf("\n");
    }
    return 0;
}