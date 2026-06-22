#include <stdio.h>
int main()
{
    // while loop : continues the same code while the condition remains true
    // condition must be true for us to enter while loop
    // int number =1;
    // while (number<=0)
    // this condition make the while loop as false makes it not enter in the loop hence the condition should be satisfies the loop as from the variable as well then it enter into the loop 
    int number = 0;

    
    while (number <= 0)
    // if the condition is not met with the while loop condition it is in the loop forever until the condition is true then it escape from the loop
    {
        printf("enter a number greater than zero : ");
        scanf("%d", &number);
    }

    return 0;
}