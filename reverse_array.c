#include <stdio.h>

void reverse(int arr[], int n)
{
    for (int i = 0; i < n/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("The value of %d element is : %d\n", i, arr[i]);
    }

    return 0;
}
