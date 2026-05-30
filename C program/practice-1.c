// Your First Challenge: The Currency Converter
// Write a short C program that converts an amount in USD (Dollars) to EUR (Euros).

// Rules & Requirements:

// Assume the exchange rate is 1 USD = 0.92 EUR.

// Declare a variable for the amount in USD and assign it a value (e.g., 100.0).

// Calculate the equivalent amount in EUR.

// Print the result to the screen.

#include <stdio.h>

int main() {
    // 1. Declare your variables here (use float or double for decimals)
    float USD , EUR;
    printf("Enter the NUmber of Doller that you want convert into EUR:");
    scanf("%f",&USD);

    // 2. Perform the calculation
    EUR = 0.92 * USD;
    
    // 3. Print the result using printf()
    printf("The %.2f USD is Equal to %.2f EUR",USD,EUR);
    
    return 0;
}