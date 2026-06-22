/*
Function in c : A reusable section of the that can be invoked from multiple places in the program. it is block of code that performs a specific task and can be called from other parts of the program. Functions help to break down a complex program into smaller, more manageable pieces, making it easier to read, maintain, and debug.

Arguments in c :    The values that are passed to a function when it is called. These values are used by the function to perform its task. Arguments can be of any data type, including primitive types (like int, float, char) and user-defined types (like structs). When a function is called, the arguments are evaluated and their values are passed to the function's parameters.
*/

#include <stdio.h>
#include <string.h>
void Happy_birthday(char name[100], int age)
// to define the function we have to write the return type of the function and then the name of the function and then the parameter of the function in the parenthesis and then the body of the function in the curly braces
// For variable in the parameter we can also write the data type of the variable and then the name of the variable and we can also write only the name of the variable without writing the data type of the variable because we have already defined the data type of the variable in the main function and we can also write the parameter without writing the name of the variable but it's not a good practice to write only the data type of the variable without writing the name of the variable because it will be difficult to understand that which variable is used for which purpose in the function
{
    printf("\nHappy Birthday To you ! ");
    printf("\nHappy Birthday To you ! ");
    printf("\nHappy Birthday To you ! ");
    printf("\nHappy Birthday To you ! %s ", name);
    printf("\nYou are %d years old ! ", age);
}
int main()
{
    char name[100];
    int age;
    printf("Enter you name:");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    // name[strlen(name) - 1] = '\0';
    // strlen: computes the length of a string, excluding the null terminator
    

    // strcspn:  computes the length of the initial segment of a string that consists entirely of characters not found in a specified set
    printf("Please enter your age : ");
    scanf("%d", &age);

    Happy_birthday(name, age);
    Happy_birthday(name, age);
    Happy_birthday(name, age);

    return 0;
}