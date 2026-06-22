#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int getuserchoice();
int getComputerChoice();
void checkWinner(int ComputerChoice, int userchoice);
int getComputerChoice()
{
    return (rand() % 3) + 1;
}

int getuserchoice()
{
    int choice = 0;
    do
    {
        printf("\nChoose the option ");
        printf("\n1.Rock ");
        printf("\n2.paper ");
        printf("\n3.scissors");
        printf("\nPlease enter the number : ");
        scanf("%d", &choice);

    } while (choice < 1 || choice > 3);

    return choice;
}

void checkWinner(int ComputerChoice, int userchoice)
{
    if (userchoice == ComputerChoice)

    {
        printf("\nIt's a tie Game ");
    }
    else if ((userchoice == 1 && ComputerChoice == 3) || (userchoice == 2 && ComputerChoice == 1) || (userchoice == 3 && ComputerChoice == 2))
    {
        printf("\nYou won ! ");
    }
    else
    {
        printf("\nYou Loose !");
    }
}

int main()
{
    srand(time(NULL));
    printf("--- Rock paper scissors  Game ---\n ");
    int userchoice = getuserchoice();
    int ComputerChoice = getComputerChoice();
    // 1. Implicit (Automatic)
    // An implicit action happens automatically without the programmer needing to write specific code to make it happen. The compiler or interpreter assumes intent based on context.

    //     common Example: Implicit Type Conversion (Coercion)
    // If you add an integer and a floating-point number together, the compiler automatically converts the integer to a float behind the scenes so the math works.

    // C
    // int num_integer = 5;
    // double num_double = 2.5;

    //  The compiler implicitly (automatically) converts num_integer to a double (5.0)
    // double result = num_integer + num_double; // result is 7.5


    //     2. Explicit (Manual)
    // An explicit action happens only because the programmer explicitly wrote out the command to do it. It leaves zero room for the compiler to guess.

    // Common Example: Explicit Type Conversion (Casting)
    // If you want to convert a floating-point number into an integer, the computer won't do it automatically because data (the decimal part) will be lost. You must forcefully and explicitly "cast" it.

    // C
    // double pi = 3.14;

    //  You explicitly force the double to become an int using (int)
    // int truncated_pi = (int)pi; // truncated_pi becomes 3

    printf("\n%d", userchoice);
    printf("\n%d", ComputerChoice);
    switch (userchoice)
    {
    case 1:
        printf("\nYou selected Rock ");
        break;
    case 2:
        printf("\nYou selected Paper ");
        break;
    case 3:
        printf("\nYou selected scissors ");
        break;
    }
    switch (ComputerChoice)
    {
    case 1:
        printf("\nComputer selected Rock ");
        break;
    case 2:
        printf("\nComputer selected Paper ");
        break;
    case 3:
        printf("\nComputer selected scissors ");
        break;
    }

    checkWinner(ComputerChoice, userchoice);
    return 0;
}
