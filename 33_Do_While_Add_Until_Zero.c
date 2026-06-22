// Problem 2: The "Add Until Zero" Calculator (Intermediate)
// Goal: Write a program that continuously asks the user to enter numbers. The program should keep a running total (sum) of all the numbers entered. The loop should escape only when the user enters 0. At the end, print the total sum.
//  for the two number

// #include <stdio.h>
// int main()
// {
//     int number1, number2, sum;
//     do
//     {
//         printf("\n Please enter the number : ");
//         scanf("%d", &number1);
//         printf("Please enter the number : ");
//         scanf("%d", &number2);
//         sum = number1 + number2;
//         printf("The sum of %d of %d is : %d", number1, number2, sum);
//     } while (sum != 0);

//     return 0;
// }

// for the single number

#include <stdio.h>
int main()
{
    int number, sum = 0;
    do
    {
        printf("\n Please enter the number : ");
        scanf("%d", &number);

        sum += number;
        printf("The sum of %d of  : %d", number, sum);
    } while (sum != 0);

    return 0;
}
