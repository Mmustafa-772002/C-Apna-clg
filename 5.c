// instruction and operators :
//  instruction : The instruction is a command that tells the computer to perform a specific operation. It consists of an opcode, which identifies the operation to be performed, and zero or more operands, which specify the data on which the operation is to be performed.

// types of instruction :
// 1.Type declaration instructions: These instructions declare the type of a variable or a function. For example, int x; declares a variable x of type int.
// example :
// int x; // declares a variable x of type int.
// float y; // declares a variable y of type float.
// char c; // declares a variable c of type char.
// void f(); // declares a function f that takes no arguments and returns void.
// int g(int); // declares

// type declaration rules :
// |------------------------------|--------------------------|
// |        type                  |      description         |
// |------------------------------|--------------------------|
// | int                          | integer                  |
// | float                        | floating-point number    |
// | double                       | double-precision number  |
// | char                         | character                |
// | void                         | no value                 |
// |------------------------------|--------------------------|

// rules 1 : The type declaration instructions must be followed by a semicolon (;).
// example : int x; // correct
//           intx;   // incorrect,

// rules 2 : The type declaration instructions can be combined with an assignment to initialize the variable.
// example : int x = 10; // declares a variable x of type int and initializes it to 10.
//           float y = 3.14; // declares a variable y of type float and initializes it to 3.14.

// rules 3 : The type declaration instructions can be combined with a function definition to declare a function.
// example : void f() { // declares a function f that takes no arguments and returns void.
//              function body
//           }

// rules 4 : The type declaration instructions can be combined with a function declaration to declare a function.
// example : int g(int); // declares a function g that takes an int argument and returns an int.

// rule 5: declare variable before use it.
// example : int x = 10; // declares a variable x of type int and initializes it to 10.
//           printf("%d", x); // prints the value of x.

// rule 6 : we can declare same type of variable in one line.
//  example : int x, y = 10, z; // declares three variables x, y, and z of type int and initializes y to 10.

// rule 7 : we can declare multiple variables of different types in one line.
// example : int x = 10, y; // declares a variable x of type int and initializes it to 10, and declares a variable y of type int.

// rule 8 : we can declare same value for  all declared variables.
// example : int x = 10, y = 10, z = 10; // declares three variables x, y, and z of type int and initializes them to 10.
// example : int x = 10

#include <stdio.h>
int main()
{
    int a = 22;
    int b = 33;
    int oldAge = 22;
    int newAge = 33;
}

// 2. Arithmetic instructions: These instructions perform arithmetic operations such as addition, subtraction, multiplication, and division on values or variables.
// oprand : oprand is a value or variable on which an operation is performed. For example, in the expression x + y, x and y are operands, and + is the operator.

//        a     +     b
//        |     |     |
//      oprand  |   oprand
//        |     |     |
//      value   |   value
//           operator

#include <stdio.h>
int main()
{
    int a, b, sum;
    a = 10;
    b = 220;
    sum = a + b;
    printf(" the sum of the a and b is %d ", sum);
}

// in arithmatic operator we have the operator types :
// 1. Addition (+): Adds two values or variables together.
// 2. Subtraction (-): Subtracts one value or variable from another.
// 3. Multiplication (*): Multiplies two values or variables together.
// 4. Division (/): Divides one value or variable by another.
// 5. Modulus (%): Returns the remainder of dividing one value or variable by another. the modulator operator work only with integer values. 
// 6. Increment (++): Increases the value of a variable by one.
// 7. Decrement (--): Decreases the value of a variable by one.
// 8. Assignment (=): Assigns a value to a variable.
// 9. Compound assignment (+=, -=, *=, /=, %=): Performs an arithmetic operation and assigns the result to a variable.

//  |--------------------------|----------------------|
//  |        valid             |      invalid         |
//  |--------------------------|----------------------|
//  | a = b + c;               |  b + c = a           |
//  | a = b * c;               |  a = bc              |
//  | a = b / c;               |  a = b ↑ c           |
//  |--------------------------|----------------------|

//  |--------------------------|----------------------|
//  |    expression            |      value           |
//  |--------------------------|----------------------|
//  |         +                |  addition            |
//  |         -                |  subtraction         |
//  |         *                |  multiplication       |
//  |         /                |  division            |
//  |         %                |  modulus             |
//  |         ++               |  increment           |
//  |         --               |  decrement           |
//  |         =                |  assignment          |
//  |         +=               |  compound assignment |
//  |         -=               |  compound assignment |
//  |         *=               |  compound assignment |
//  |         /=               |  compound assignment |
//  |         %=               |  compound assignment |
//  |--------------------------|----------------------|

#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    int mod = a % b;
    int inc = a++;
    int dec = b--;
    int equal = (a == 30);
    int compound = a += 10;
    printf(" the sum of the a and b is %d \n", sum);
    printf(" the sub of the a and b is %d \n", sub);
    printf(" the mul of the a and b is %d \n", mul);
    printf(" the div of the a and b is %d \n", div);
    printf(" the mod of the a and b is %d \n", mod);
    printf(" the inc of the a and b is %d \n", inc);
    printf(" the dec of the a and b is %d \n", dec);
    printf(" the equal of the a and b is %d \n", equal);
    printf(" the compound of the a and b is %d \n", compound);
}

// 3. Control instructions: These instructions control the flow of execution in a program. They include conditional statements (if, else, switch), loops (for, while, do-while), and function calls.
// 4. Data movement instructions: These instructions move data between memory locations or registers. They include load and store instructions, which move data between memory and registers, and move instructions, which move data between registers.
// 5. Input/output instructions: These instructions read input from a device (such as a keyboard or mouse) or write output to a device (such as a display or printer).
// 6. Transfer instructions: These instructions transfer control from one part of a program to another. They include jump instructions, which transfer control to a specific location in the program, and call and return instructions, which transfer control to and from a function.
// 7. Logical instructions: These instructions perform logical operations such as AND, OR, and NOT on values or variables.

//  operators : Operators are symbols that represent an operation that can be performed on one or more operands. They are used to perform arithmetic, logical, and other operations on values or variables.