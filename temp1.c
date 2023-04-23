#include <stdio.h>

void printTable(int arr[], int num, int n)
{
    printf("\nThis is Table of : %d\n", num);
    for (int i = 0; i < n; i++)
    {
        arr[i] = num * (i + 1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d X %d = %d\n", num, (i + 1), arr[i]);
    }
    printf("\n");
    printf("****************************************\n");
}

int main()
{
    int mulTable[3][10];
    printTable(mulTable[0], 2, 10);
    printTable(mulTable[0], 7, 10);
    printTable(mulTable[0], 9, 10);
    return 0;
}