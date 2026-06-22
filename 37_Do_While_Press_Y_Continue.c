// Problem 6: The "Press 'y' to Continue" Loop (Character Checking)
// Goal: Sometimes you want to ask the user if they want to repeat an action. Write a program that prints a simple message, then asks the user: "Do you want to run again? (y/n): ". If they type 'y', the loop repeats. If they type anything else, it stops.

#include<stdio.h>
int main ()
{
    char input ; 
    do
    {
        printf("Do you want to run again? (y/n):");
        scanf(" %c",&input);
        if (input =='y' || input =='n' )
        {
            /* code */
        }
        else
        {
            printf("Invalid option");
        }
        
        
    } while (input == 'y');
    
}

//another approach 
// #include <stdio.h>

// int main() {
//     char choice;

//     do {
//         printf("\nProcessing data... Done!\n");
        
//         printf("Do you want to run this process again? (y/n): ");
//         scanf(" %c", &choice); // Notice the space before %c

//     } while (choice == 'y' || choice == 'Y'); // Stays if user types 'y' or 'Y'

//     printf("Program closed.\n");
//     return 0;
// }