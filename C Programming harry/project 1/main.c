#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num;
    int guess;
    int no_gusse =0;

// Intialize random number generator
    srand(time(NULL));

// genarator random number between 1-100
    num = (rand() % 100) + 1;

    do
    {
        printf("Guess the number: ");
        scanf("%d", &guess);
        if(guess < num)
        {
            printf("higher number please!\n");
        }
        else if(guess > num)
        {
            printf("lower number please!\n");
        }
        else
        {
            printf("Congratulation!");
        }
        
        no_gusse++ ;
        
    }
    while (guess != num);
    printf("you succesfully guessed the number. \nNo. of attmpts : %d", no_gusse);

    return 0;
}