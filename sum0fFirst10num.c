#include <stdio.h>

int main()
{
    int num, factorial = 1, i = 1;
    printf("Enter Number : ");
    scanf("%d", &num);

    while(i <= num)
    {
       factorial *= i;
       i++;
    }
    
    printf("Ans : %d", factorial);

    return 0;
}
