#include <stdio.h>
int main()
{
    int number = 0;
    do
    // in the do while loop the the code written in the do block that is executed at first and at the last the while condition is checked based on the user input from the do block and once user input is not matched with the condition it stays in the loop and once the condition is satisfies then it escapes from the loop
    {
        printf("Enter the number : ");
        scanf("%d", &number);
    } // while (number<= 0);
    while (number != 0);
    // This condition satisfies the number when equal to zero then it escapes from the loop
    // if the number is greater or less than zero it goes into the infinite loop
}