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
    int temperature;
    printf("Please Enter the temperature :  ");
    scanf("%d", &temperature);
    if (temperature > 0 && temperature <= 30)
    {
        printf("The temperature is Good");
    }
    else if (temperature >= 31 && temperature <= 60)
    {
        printf("The temperature is Hot please wear suncap And apply suncream");
    }
    else if (temperature >= 60 && temperature <= 90)
    {
        printf("Don't Go outside it's Too much Hot");
    }
    else
    {
        printf("Please Enter the valid number  ");
    }
}