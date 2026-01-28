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

to declare the variable in the priter use the below format
data_type variable_name = value;
Example:
|--------------|---------------|-----------------|-----------------|
| data_type    | variable_name | declation       |format specifier |
|--------------|---------------|-----------------|-----------------|
| int          | age           | int age;        | %d              |
| float        | height        | float h;        | %f              |
| char         | initial       | char i;         | %c              |
| double       | weight        | double w;       | %lf             |
| signed int   | score         | signed int s;   | %d              |
| unsigned int | count         | unsigned int c; | %d              |
| short int    | small_num     | short int sn;   | %d              |
| long int     | big_num       | long int bn;    | %d              |
|--------------|---------------|-----------------|-----------------|
* here is the format specifiers used to print the variable values on the screen:
* %d is used to print the integer value.
* %f is used to print the float value.
* %c is used to print the character value.
* %lf is used to print the double value.
* %ld is used to print the long integer value.
* %u is used to print the unsigned integer value.
* %x is used to print the hexadecimal value.
* %o is used to print the octal value.

|-------------------|----------|
| Data Type         | Size     |
|-------------------|----------|
| int               | 4 bytes  |
| float             | 4 bytes  |
| char              | 1 byte   |
| double            | 8 bytes  |
| long int          | 8 bytes  |
| short int         | 2 bytes  |
| unsigned int      | 4 bytes  |
| signed int        | 4 bytes  |
| unsigned char     | 1 byte   |
| signed char       | 1 byte   |
| unsigned short    | 2 bytes  |
| signed short      | 2 bytes  |
| unsigned long     | 8 bytes  |
| signed long       | 8 bytes  |
|-------------------|----------|
* the size of the data types may vary depending on the system architecture (32-bit or 64-bit).
* the sizeof() operator is used to determine the size of a data type or variable in bytes
Example:
printf("Size of int: %lu bytes\n", sizeof(int));
printf("Size of float: %lu bytes\n", sizeof(float));
printf("Size of char: %lu bytes\n", sizeof(char));
printf("Size of double: %lu bytes\n", sizeof(double));
* here %lu is used to print the size in bytes which is of unsigned long type.
* %.2f is used to print the float value upto 2 decimal places.

* the .2 is used to print the float value upto 2 decimal places.
* the rules to write the variable names in C programming language are as follows:
- variable names must start with a letter (a-z, A-Z) or an underscore (_)
Example: int age; float _height; char name1;
- variable names can contain letters, digits (0-9), and underscores (_)
Example: int age22; float height_5; char name_1;
- variable names should not contain spaces or special characters (eg: !, @, #, $, %, etc.)
Example: int age!; float height@; char name#;  // invalid variable names
- variable names are case-sensitive (age and Age are different variables)
Example: int age; int Age;  // two different variables
- variable names should not be a reserved keyword in C programming language (eg: int, float, return, etc.)
Example: int int; float float; return return;  // invalid variable names


-------------------------------------------------------------

*/

#include <stdio.h>
int main()
{
    int a;
    int b;
    a = 10;
    b = 20;
    int sum;
    sum = a + b;
    printf("The sum of %d and %d is : %d", a, b, sum);
    int age = 22;
    float height = 5.5;
    char name = 'J';
    double weight = 65.53;
    printf(" the age is : %d\n", age);
    printf("the height is : %.2f\n", height);
    // here are the .2 is used to print the float value upto 2 decimal places.
    printf("the name is : %c\n", name);
    printf("the weight is : %.2lf\n", weight);
    return 0;
}