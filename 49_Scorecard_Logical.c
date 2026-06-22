// Logical operator is used to perform the the execution with the condition is true or false like for some scenario the conditions both are true and in some condition the one condition is true and another is false or condition is not true

// these are used to combine or modify the boolean expressions
/*
For that we generally using the logical operator
- && (AND) : Both conditions are true
- || (OR) : One condition is True and another is false
- ! (NOT) : Condition is false
*/
#include <stdio.h>
int main()
{
    int Percentage;
    printf("Please Enter the Percentage :  ");
    scanf("%d", &Percentage);
    if (Percentage > 0 && Percentage <= 35)
    {
        printf("You Did not cleared The exam You are Fail !");
    }
    else if (Percentage >= 36 && Percentage <= 55)
    {
        printf("You Have Good score Your Grade based on the percentage is C ");
    }
    else if (Percentage >= 56 && Percentage <= 85)
    {
        printf("You Have Nice score Your Grade based on the percentage is B ");
    }

    else if (Percentage >= 86 && Percentage <= 90)
    {
        printf("You Have perfect score Your Grade based on the percentage is A ");
    }
    else if (Percentage >= 91 && Percentage <= 100)
    {
        printf("You Have Amazing score Your Grade based on the percentage is A+ ");
    }
    else
    {
        printf("Please Enter the valid number  ");
    }
}