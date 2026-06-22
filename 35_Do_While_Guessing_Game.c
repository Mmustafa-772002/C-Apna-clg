// Problem 4: The Guessing Game (Random-ish Logic)
// Goal: Write a program where a "secret number" is defined (e.g., 7). The program should repeatedly ask the user to guess the number.

// If the guess is too high, print "Too high!"

// If the guess is too low, print "Too low!"

// The loop should end only when the user guesses correctly.

#include <stdio.h>
int main()
{
    int guess_number = 100, number;
    do
    {
        printf("\n Enter The Number : ");
        scanf("%d", &number);
        if (number > guess_number)
        {
            printf("\n The number is Too high!\n ");
        }
        else
        {
            printf("\n The number is Too low!\n ");
        }

    } while (number != guess_number);
    printf("\n The number is correct ! ");
}

//  from the system to generate the random number
// #include <stdio.h>
// #include <stdlib.h> // Required for rand() and srand()
// #include <time.h>   // Required for time()

// int main()
// {
//     1. Seed the random number generator using the current time
//     srand(time(NULL));

//     2. Generate a random number between 1 and 100
//     int guess_number = (rand() % 100) + 1;
//     int number;

//     printf("--- Welcome to the Guessing Game! --- \n");

//     do
//     {
//         printf("\nEnter The Number: ");
//         scanf("%d", &number);

//         if (number > guess_number)
//         {
//             printf("Too high!\n");
//         }
//         else if (number < guess_number) // Changed to 'else if' so it doesn't print "Too low" when you win
//         {
//             printf("Too low!\n");
//         }

//     } while (number != guess_number);

//     printf("\nCongratulations! The number is correct!\n");

//     return 0;
// }