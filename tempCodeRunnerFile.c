#include <stdio.h>

int chk(int arr[], int n){
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > 0){
            flag++;
        }
    }
    return flag;
}

void inp(int arr[],int n) {
    for (int i = 0; i < n; i++)
    {
        printf("Enter a[%d] : ", i);
        scanf("%d",&arr[i]);
    }
    
}

int main()
{
    int arr[5];
    int s = sizeof(arr) / sizeof(arr[0]);
    inp(arr,s);
    printf("Positive Elements are %d\n", chk(arr,s));

    return 0;
}