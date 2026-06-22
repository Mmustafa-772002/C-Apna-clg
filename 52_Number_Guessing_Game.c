#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int guess = 0;
    int tries = 0;
    int max_tries = 5;
    int min = 1;
    int max = 100;


    int answer = (rand() % (max - min + 1)) + min;

    printf("Welcome to the Guessing Game! I'm thinking of a number between %d and %d.\n", min, max);


    while (guess != answer && tries < max_tries)
    {
        printf("\nEnter your guess number: ");
        scanf("%d", &guess);
        tries++; // Track the attempt

        if (guess < answer)
        {
            printf("Wrong number! The answer is HIGHER.\n");
            printf("Attempts left: %d\n", max_tries - tries);
        }
        else if (guess > answer)
        {
            printf("Wrong number! The answer is LOWER.\n");
            printf("Attempts left: %d\n", max_tries - tries);
        }
        else
        {
            printf("\nCongratulations! You entered the correct number: %d\n", answer);
            printf("It took you %d tries.\n", tries);
            return 0; // Exit early since they won!
        }
    }

    if (guess != answer)
    {
        printf("\nYou reached the limit of %d tries. Try again later!!\n", max_tries);
        printf("The correct number was: %d\n", answer);
    }

    return 0;
}
