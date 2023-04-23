#include <stdio.h>

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void main()
{
    int a = 5, b = 7;
    printf("Before Swapping,\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    printf("After Swapping,\n");
    swap(&a, &b);
    printf("A = %d\n", a);
    printf("B = %d", b);
}
