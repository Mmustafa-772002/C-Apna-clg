// Here are 10 programs questions on variables in C programming language:
/*
1. Write a C program to declare and initialize an integer variable and print its value.
2. Write a C program to declare and initialize a float variable and print its value with 2 decimal places.
3. Write a C program to declare and initialize a char variable and print its value.
4. Write a C program to declare and initialize a double variable and print its value.
5. Write a C program to swap the values of two integer variables using a temporary variable.
6. Write a C program to find the size of different data types (int, float,
char, double) using the sizeof() operator and print the sizes.
7. Write a C program to demonstrate the rules for naming variables in C.
8. Write a C program to declare multiple variables of different data types in a single line and print their values.
9. Write a C program to perform basic arithmetic operations (addition, subtraction, multiplication, division) on two integer variables and print the results.
10. Write a C program to declare a constant variable using the const keyword and attempt to modify its value (to show that it cannot be changed).
*/

#include <stdio.h>
#include <math.h>
int main()

{
    // 1. Write a C program to declare and initialize an integer variable and print its value.
    int number = 20;
    printf("The interger number is : %d \n", number);

    // 2. Write a C program to declare and initialize a float variable and print its value with 2 decimal places.

    float pi = 3.141;
    printf("The floating number is : %.2f \n ", pi);

    //     3. Write a C program to declare and initialize a char variable and print its value.
    char Alphabet = 'i';
    printf("The Alphabet is %c \n", Alphabet);

    char name[20] = "mustafa";
    printf("The character name is %s \n", name);

    // 4. Write a C program to declare and initialize a double variable and print its value.
    double weight = 88.22;
    printf("The double varible weight is : %.3lf \n", weight);

    // 5. Write a C program to swap the values of two integer variables using a temporary variable.
    int num1 = 20;
    int num2 = 30;
    printf("The value of num1 and num2 is : %d , %d \n ", num1, num2);
    printf("The value of num1 and num2 after swap is : %d , %d \n", num2, num1);

    // or
    int temp;
    int num3 = 20;
    int num4 = 30;
    printf("The value of num3 and num4 is : %d , %d \n ", num3, num4);
    temp = num3;
    num3 = num4;
    num4 = temp;

    printf("The value of num3 and num4 after swap is : %d , %d \n", num3, num4);

    // 6. Write a C program to find the size of different data types (int, float, char, double) using the sizeof() operator and print the sizes.

    int num5;
    float num6;
    char alpha1;
    double num7;
    printf("The sizeof Int is %d \n ", sizeof(num5));
    printf("The sizeof float is %d \n ", sizeof(num6));
    printf("The sizeof char is %d \n ", sizeof(alpha1));
    printf("The sizeof double is %d \n ", sizeof(num7));

    // 7. Write a C program to demonstrate the rules for naming variables in C.
    int age1 = 25;        // valid variable name
    float _height1 = 5.9; // valid variable name
    char name_2 = 'A';    // valid variable name
    // int 2num = 30;       // invalid variable name (starts with a digit)
    // float height-2 = 6.1; // invalid variable name (contains special character '-')
    // char first name = 'B'; // invalid variable name (contains space)
    printf("Valid variable names: age1 = %d, _height1 = %.1f, name_2 = %c\n", age1, _height1, name_2);
    // printf("Invalid variable names: 2num = %d, height-2 = %.1f, first name = %c\n", 2num, height-2, first name); // This line will cause a compilation error

    // 8. Write a C program to declare multiple variables of different data types in a single line and print their values.
    int age = 22;
    float height = 5.5;
    char name1 = 'J';
    double weight1 = 65.53;
    printf("the age is : %d\n", age);
    printf("the height is : %.2f\n", height);
    printf("the name is : %c\n", name1);
    printf("the weight is : %.2lf\n", weight1);

    // 9. Write a C program to perform basic arithmetic operations (addition, subtraction, multiplication, division) on two integer variables and print the results.
    int num8, num9;
    num8 = 50, num9 = 50;
    printf("The sum of a number %d and %d is : %d \n ", num8, num9, num8 + num9);
    printf("The sub opertaion of a number %d and %d is : %d \n ", num8, num9, num8 - num9);
    printf("The mul opertaion of a number %d and %d is : %d \n ", num8, num9, num8 * num9);
    printf("The div opertaion of a number %d and %d is : %d \n ", num8, num9, num8 / num9);
    printf("The Square root of Number %d is : %d \n ", num8, sqrt(num8));
    // 10. Write a C program to declare a constant variable using the const keyword and attempt to modify its value (to show that it cannot be changed).
    const int num10 = 3;
    printf("Initial value of attempts: %d\n",num10);

    /* The const variable cannot be modified after its declaration
    this used to show error
    realtime example:

    it can be used to define constant values like pi, gravity, etc.
    const float pi = 3.14159;
    pi = 3.14; // This will cause a compilation error
    */

    return 0;
}