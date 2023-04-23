#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int n = rand()%100 + 1;
    printf("%d", n);
    return 0;
}