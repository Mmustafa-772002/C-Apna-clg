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