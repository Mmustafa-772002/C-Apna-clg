#include <stdio.h>
int main()
{
    int choice;
    float Celsius;
    float Fahrenheit;
    printf("1.Celsius to Fahrenheit \n2. Fahrenheit to Celsius ");
    printf("\nPlease enter your choice to convert the temperature: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("please enter the temperature in celsius : ");
        scanf("%f",&Celsius);
        Fahrenheit =(Celsius)*9/5+32;
        printf("The temperature in Fahrenheit is : %.2f", Fahrenheit);
    }
    else if (choice == 2)
    {
        printf("please enter the temperature in Fahrenheit : ");
        scanf("%f",&Fahrenheit);
        Celsius = (Fahrenheit - 32 )*5/9;
        printf("The temperature in Celsius is : %.2f", Celsius  );
    }
    else
    {
        printf("please Enter the valid choice !");
    }
    
}