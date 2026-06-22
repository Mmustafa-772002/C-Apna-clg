#include <stdio.h>
int main()
{
    int choice;
    float Addition, Subtraction, Multiplication, Division, number1, number2;
    printf("\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division");
    printf("\n Please enter you choice Which operation you want to perform :");
    scanf("%d", &choice);
    printf("Please Enter the number : ");
    scanf("%f", &number1);
    printf("Please Enter the number : ");
    scanf("%f", &number2);

    switch (choice)
    {
    case 1:
        Addition = number1 + number2;
        printf("The addition of the %.2f & %.2f is %f", number1, number2, Addition);
        break;
    case 2:
        Subtraction = number1 - number2;
        printf("The Subtraction of the %.2f & %.2f is %f", number1, number2, Subtraction);
        break;

    case 3:
        Multiplication = number1 * number2;
        printf("The Multiplication of the %.2f & %.2f is %f", number1, number2, Multiplication);
        break;
    case 4:
        if (number2 == 0)
        {
            printf("You can't divide by zero !");
        }
        else
        {
            Division = number1 / number2;
            printf("The Division of the %.2f & %.2f is %.2f", number1, number2, Division);
        }
        break;

    default:
        printf("Please Enter the valid Choice %d  is not valid!", choice);
        printf("\n Please select from this \n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division");
        break;
    }
    return 0;
}