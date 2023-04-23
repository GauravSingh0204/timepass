#include <stdio.h>
// #include <stdlib.h>
#include <time.h>

int main()
{
    int num, guess, n_guess = 0;
    srand(time(0));
    num = rand() % 100 + 1;
    //printf("Number is : %d\n", num);
    do
    {
        printf("Guess the Number : ");
        scanf("%d", &guess);
        if (num > guess)
        {
            printf("Enter Bigger Number\n");
        }
        else if (num < guess)
        {
            printf("Enter Smaller Number\n");
        }
        else
        {
            printf("Enter Guessed the Number in %d attemps\n", n_guess);
        }
        n_guess++;
    } while (num != guess); 

    return 0;
}
