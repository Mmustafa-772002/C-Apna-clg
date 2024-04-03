
// write a program to check the grade of the student
#include <stdio.h>
int main()
{

    int marks, grade;
    printf(" enter the marks of the student : ");
    scanf("%d", &marks);
    if (marks >= 90 && marks <= 100)
    {
        printf(" you have a+ grade ");
    }
    else if (marks > 80 && marks <=90)
    {
        printf(" you have a grade ");
    }
    else if (marks > 70 && marks <=80)
    {
        printf(" you have b+ grade ");
    }
    else if (marks > 60 && marks <=70)
    {
        printf(" you have b grade ");
    }
    else if (marks > 50 && marks <=60)
    {
        printf(" you have c grade ");
    }
    else 
    {
        printf(" you have failed in the exam ");
    }
}

// 4. Assignment operators: Assignment operators assign a value to a variable.

//  |------------------------|--------------------------------|
//  |        operator        |      description               |
//  |------------------------|--------------------------------|
//  |          =             |  assignment                    |
//  |          +=            |  addition assignment           |
//  |          -=            |  subtraction assignment        |
//  |          *=            |  multiplication assignment     |
//  |          /=            |  division assignment           |
//  |          %=            |  modulus assignment            |
//  |------------------------|--------------------------------|

// 5. Increment and decrement operators: Increment and decrement operators increase or decrease the value of a variable by one.
// |------------------------|--------------------------------|
// |        operator        |      description               |
// |------------------------|--------------------------------|
// |          ++            |  increment                     |
// |          --            |  decrement                     |
// |------------------------|--------------------------------|

// 6. Conditional operator: The conditional operator (?:) is a ternary operator that evaluates a condition and returns one of two values based on the result of the evaluation.

//  |------------------------|--------------------------------|
//  |        operator        |      description               |
//  |------------------------|--------------------------------|
//  |          ? :           |  conditional                   |
//  |------------------------|--------------------------------|

// 7. Bitwise operators: Bitwise operators perform bitwise operations on values or variables.
//  |------------------------|--------------------------------|
//  |        operator        |      description               |
//  |------------------------|--------------------------------|
//  |          &             |  bitwise AND                   |
//  |          |             |  bitwise OR                    |
//  |          ^             |  bitwise XOR                   |
//  |          ~             |  bitwise NOT                   |
//  |          <<            |  left shift                    |
//  |          >>            |  right shift                   |
//  |------------------------|--------------------------------|

// 8. Shift operators: Shift operators shift the bits of a value to the left or right by a specified number of positions.
//  |------------------------|--------------------------------|
//  |        operator        |      description               |
//  |------------------------|--------------------------------|
//  |          <<            |  left shift                    |
//  |          >>            |  right shift                   |
//  |------------------------|--------------------------------|
