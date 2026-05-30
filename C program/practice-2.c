// Level 2 Challenge: Control Flow (if/else)
// Let's introduce decision making. In the real world, conversion apps usually charge a small fee, or they don't allow you to convert negative money.

// Your Task:
// Modify your existing code to include these rules:

// Validation: If the user enters a USD amount that is 0 or less, print an error message: "Invalid amount. Must be greater than 0."

// Transaction Fee: If the amount is valid, subtract a flat fee of $2.00 from their USD before converting it to Euros. (Example: If they input 100, you only convert 98).       

#include<stdio.h>
int main()
{
    float USD, FEE, EUR;
    printf("Enter the NUmber of Doller that you want convert into EUR:");
    scanf("%f",&USD);

    if (USD<=0)
    {
        printf("Invalid amount. Must be greater than 0.");
    }
    else
    {
        FEE = USD-2;
        EUR = 0.92 * FEE;
        printf("The %.2f USD after deducting the $2.00 Transaction Fee the net amount %.2f  is Equal to %.2f EUR",USD,FEE,EUR);
        return 0;
    }

}