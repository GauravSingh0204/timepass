#include <stdio.h>
void printArr(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The Value of ELement %d is %d\n", i + 1, ptr[i]);
    }
}
int main()
{
    int mks[] = {43, 56, 87, 21, 13};
    printArr(mks, 5);
    return 0;
}