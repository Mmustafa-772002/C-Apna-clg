/*
- Chapter 2
Variables in C programming language
* Varibales are used to store the data in the memry execution time.
* a variable is a name guven to a memory location that holds a value of a specific data type 
* before using a variable in C programming language it must be declared with a specific data type.
* C programming language is a statically typed language which means that the data type of a variable

Example:
-------------------
| a   | b   | sum |
-------------------
Here a, b, and sum are variables that can store integer values.
the squre brackets denote the memory location allocated for each variable.

variable types in C programming language:
1. int : used to store integer values (whole numbers)
2. float : used to store decimal numbers (floating-point numbers)
3. char : used to store single characters
4. double : used to store double-precision floating-point numbers
Example code to demonstrate variable declaration, initialization, and usage in C programming language:

variables decalaration and initialization
int a = 20;          // declaration of an integer variable 'a'
float b = 5.5;  // declaration and initialization of a float variable 'b'
char c = "A";  // decalation and initialization of a char variable 'c' must be specified at compile time.
double d = 10.99; // declaration and initialization of a double variable 'd' must be specified at compile time.
* once a variable is declared with a specific data type it cannot be changed to another data type.




*/


#include<stdio.h>
int main()
{
    int a;
    int b ;
    a = 10 ;
    b = 20 ;
    int sum;
    sum = a + b;
    printf("The sum of %d and %d is : %d",a,b,sum);
    return 0;

}