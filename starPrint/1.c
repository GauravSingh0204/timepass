#include <stdio.h>
void printStar();

int main()
{
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    printStar(num);
    return 0;
}   

void printStar(int n){
    if(n == 1){
        printf("*\n");
        return;
    }

    printStar(n-1);
    for (int i = 0; i < (2*n-1); i++)
    {
        printf("* ");
    } 
    printf("\n");
}