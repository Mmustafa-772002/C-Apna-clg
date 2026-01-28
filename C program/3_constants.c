/*

Constants : The constants are the fixed values that do not change during the execution of the program.
they are also called as literals.
there are 4 types of constants in c programming language :
1.interger constants
2.real constants
3.character constants

1. Integer constants:
* integer constants are the whole numbers without a decimal point.
Example : 10,-20,30,0
2. Real constants:
* real constants are the numbers with a decimal point.
Example : 3.14, -0.001, 2.0
3. Character constants:
* character constants are the single characters enclosed in single quotes.
Example : 'A', 'b', '1', '#'
4. String constants:
* string constants are the sequence of characters enclosed in double quotes.
Example : "Hello, World!", "C Programming", "12345"

exeercise:
1. Write a C program to declare a constant variable using the const keyword and print its value
2. Attempt to modify the value of the constant variable (to show that it cannot be changed).

*/

#include <stdio.h>
int main()
{
    // 1. Write a C program to declare a constant variable using the const keyword and print its value
    const float pi = 3.14 ;
    printf ("The value of pi is %.2f ",pi);
    //2. Attempt to modify the value of the constant variable (to show that it cannot be changed).
    pi = 3.14159; 
    // This line will cause a compilation error because pi is a constant
    printf ("The value of pi after modification is %.5f ",pi);
    return 0;
    
}
