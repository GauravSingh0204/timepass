#include <stdio.h>

void printArr(int mks[][2], int n);

int main()
{
    int n_stu = 3;
    int n_sub = 2;

    int mks[3][2];

    for (int i = 0; i < n_stu; i++)
    {
        for (int j = 0; j < n_sub; j++)
        {
            printf("Enter Mks for Stu %d in Sub %d : ", i + 1, j + 1);
            scanf("%d", &mks[i][j]);
        }
    }
    printArr(mks, n_stu);
    return 0;
}

void printArr(int mks[][2], int n)
{
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" %d ", mks[i][j]);
        }
        printf("\n");
    }
}