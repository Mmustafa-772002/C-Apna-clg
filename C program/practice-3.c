// Your Task:
// Modify your code using a loop so that:

// It continuously prompts the user to enter the USD amount as long as they keep entering 0 or negative numbers.

// Once they finally enter a number greater than 0, the loop stops, it calculates the conversion (minus the $2 fee), prints the result, and ends the program.

#include <stdio.h>

int main()
{
    float USD, FEE, EUR;

    do
    {
        printf("Enter the number of USD you want to convert into EUR: ");
        scanf("%f", &USD);

        if (USD <= 2.00)
        {
            printf("Please enter a value greater than $2.00 Because the transaction fee is $2.00.\n");
        }

    } while (USD <= 2.00); // Loop continues until the user enters a value greater than $2.00

    FEE = USD - 2;
    EUR = 0.92 * FEE;

    printf("The %.2f USD after deducting the $2.00 transaction fee "
           "has a net amount of %.2f USD, which is equal to %.2f EUR.\n",
           USD, FEE, EUR);

    return 0;
}

// One Tiny Edge Case to Think About (Interview Thinking)
// What happens if the user enters exactly $1.50?

// Your loop accepts it because it's greater than 0.

// But then your code does: FEE = 1.50 - 2.00; which makes FEE = -0.50.

// The user ends up with negative Euros!

// To fix that, you'd just change the loop condition to while (USD <= 2.00) and update the error message to say the amount must be greater than the $2 fee. (No need to rewrite it now, just something to keep in mind as you develop that "edge-case intuition"!)