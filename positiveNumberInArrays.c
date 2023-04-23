#include <stdio.h>
#define MAX_SIZE 100

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
    int arr[MAX_SIZE], s;

    //Get input from user
    printf("Enter the num of elements : ");
    scanf("%d", &s);
    inp(arr,s);

    //Calculate Positive Number & Print it out
    printf("\nPositive Elements are %d\n", chk(arr,s));

    return 0;
}