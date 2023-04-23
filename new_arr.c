#include <stdio.h>

int main()
{
    int n_stu = 2;
    int n_sub = 3;
    int mks[2][3]; 

    for (int i = 0; i < n_stu; i++)
    {
        for (int j = 0; j < n_sub; j++)
        {
            printf("Enter MKS for Stu %d in Sub %d : ", i + 1, j + 1);
            scanf("%d", &mks[i][j]);
        }
    }
    for (int i = 0; i < n_stu; i++)
    {
        for (int j = 0; j < n_sub; j++)
        {
            printf("The Marks for Stu %d in Sub %d is : %d \n", i + 1, j + 1, mks[i][j]);
        }
    }

    return 0;
}