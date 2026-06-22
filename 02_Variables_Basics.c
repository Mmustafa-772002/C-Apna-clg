#include <stdio.h>
#include <string.h>
#include <stdbool.h>
// this helps to works on the boolean value either it's true or false
int main()
{
    /* this variable is used as the container for the values which are used in the various operation in the program
    the variable storing data in the mutiple locations.
    the variables have different types of the data
    the memory index starts from the zero and so on...
    */
    /* To define the type of the variable the syntax should be for assigned value  variable_type variable_name = value ; for un_assigned value variable_type variable_name ; */
    int number1;
    // this prints the number it is called as integer type data such as 1,2,0,-1,-2
    float number2;
    // this prints the number it is called as floating type data such as 1.0,2.0,0,-1.0,-2.22 this is can prints the data into decimals to set the limit to print upto the specific digit the value we can we should have to use %.2f
    char number3;
    // this prints the character in the output screen such as alphabets , symbol ,etc that is used to print char that is only for single character
    char number5[100];
    // this is used for the print the sting on the output screen such as name , or anything message we can print by defining the size of character we can print from this in the sting data ttype is not available so for that we use the char variable_name[size] ;
    double number6;
    long number7;
    printf("Enter int the value :  ");
    scanf("%d", &number1);
    printf("\nThe int input value is : %d \n\n", number1);
    printf("\nThe size of int is  : %d \n\n", sizeof(number1));
    printf("Enter float the value :  ");
    scanf("%f", &number2);
    printf("\nThe float input value is : %f \n\n", number2);
    printf("\nThe size of float is  : %d \n\n", sizeof(number2));
    printf("Enter character the value :  ");
    scanf(" %c", &number3);
    printf("\nThe character input value is : %c \n\n", number3);
    printf("\nThe size of character is  : %d \n\n", sizeof(number3));
    printf("Enter double the value :  ");
    scanf("%lf", &number6);
    printf("\nThe double input value is : %lf \n\n", number6);
    printf("\nThe size of double is  : %d \n\n", sizeof(number6));
    printf("Enter long the value :  ");
    scanf("%ld", &number7);
    printf("\nThe long input value is : %ld \n\n", number7);
    printf("\nThe size of long is  : %d \n\n", sizeof(number7));
    printf("Enter string the value :  ");
    scanf("%s", number5);
    // advise for to print the sting do not use the & use to address the variable for string
    printf("\nThe string input value is : %s \n\n", number5);
    printf("\nThe size of string is  : %d \n\n", sizeof(number5));
    // this \n \t specifies the format specifier
    bool isonline = 0;
    bool isoffline = true;
    printf("The entered  boolean value for the number is online is : %d \n \n ", isonline);
    printf("The entered  boolean value for the number is offline is : %d ", isoffline);

    // 0 means false 1 means true 
    // we can directly write as true or false 

    return 0;
}