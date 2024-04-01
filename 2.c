
// chapter 1
//  variable  : variable are the name of memory location we can store the data in the memory location
// example a = 20 ;
// this is the a variable which store the 20 value in the memory location

// memory
// ----------------------------------------------------------------|
// |   a   |   b  |   c  |   d  |   e  |   f  |   g  |   h  |  i   |
// ----------------------------------------------------------------|
//                    ^     ^     ^    ^     ^     ^     ^     ^
//                    |     |     |    |     |     |     |     |
// |---------------------------------------------------------------|
// |   20  |  30  |  40  |  50  |  60  |  70  |  80  |  90  | 100  |
// ----------------------------------------------------------------|

// more concepts in the variables  and memory
// 1 bit = 0 or 1
// 1 byte = 8 bits
// 1 kb = 1024 bytes
// 1 mb = 1024 kb
// 1 gb = 1024 mb

// data types in c language
#include <stdio.h>
int main()
{

    // int is a data type which is used to store the integer value
    int a = 20;
    int b = 30;
    int c = 40;
    int d = 50;
    int e = 60;
    int f = 70;
    int g = 80;
    int h = 90;
    int i = 100;
    // float is a data type which is used to store the decimal value
    float j = 20.5;
    // char is a data type which is used to store the character value
    char k = 'a';
    // string is not a data type in c language it is a array of character
    // so we use the char data type to store the string
    char l[] = "hello world";
    // bool is not a data type in c language it is a integer data type
    // so we use the int data type to store the boolean value
    int m = 1;
    // double is a data type which is used to store the decimal value
    double n = 20.5;
    // long is a data type which is used to store the integer value
    long o = 20000000;
    // long long is a data type which is used to store the integer value
    long long p = 20000000000000;
    // short is a data type which is used to store the integer value
    short q = 20;
    // unsigned is a data type which i used to store the positive value
    unsigned r = +20;
    // signed is a data type which is used to store the negative and positive value
    signed s = -20;
    // void is a data type which is used to store the no value

    printf("The value of a is %d\n", a);   // The value of a is signed integer
    printf("The value of b is %d\n", b);   // The value of b is signed integer
    printf("The value of c is %d\n", c);   // The value of c is signed integer
    printf("The value of d is %d\n", d);   // The value of d is signed integer
    printf("The value of e is %d\n", e);   // The value of e is signed integer
    printf("The value of f is %d\n", f);   // The value of f is signed integer
    printf("The value of g is %d\n", g);   // The value of g is signed integer
    printf("The value of h is %d\n", h);   // The value of h is signed integer
    printf("The value of i is %d\n", i);   // The value of i is signed integer
    printf("The value of i is %f\n", j);   // The value of i is float
    printf("The value of i is %c\n", k);   // The value of i is character
    printf("The value of i is %s\n", l);   // The value of i is string
    printf("The value of i is %d\n", m);   // The value of i is signed integer
    printf("The value of i is %lf\n", n);  // The value of i is double
    printf("The value of i is %ld\n", o);  // The value of i is long
    printf("The value of i is %lld\n", p); // The value of i is long long
    printf("The value of i is %d\n", q);   // The value of i is signed integer
    printf("The value of i is %u\n", r);   // The value of i is unsigned integer
    printf("The value of i is %d\n", s);   // The value of i is signed integer

    return 0;
}

// data types 
//  |---------------------------|------------------|----------------------|
//  |         data type         |      size        |    format specifier  |
//  |---------------------------|------------------|----------------------|
//  |           int             |      4 bytes     |          %d          |
//  |---------------------------|------------------|----------------------|
//  |          float            |      4 bytes     |          %f          |
//  |---------------------------|------------------|----------------------|
//  |          char             |      1 bytes     |          %c          |
//  |---------------------------|------------------|----------------------|
//  |          string           |      1 bytes     |          %s          |
//  |---------------------------|------------------|----------------------|
//  |          bool             |      4 bytes     |          %d          |
//  |---------------------------|------------------|----------------------|
//  |         double            |      8 bytes     |          %lf         |
//  |---------------------------|------------------|----------------------|
//  |          long             |      4 bytes     |          %ld         |
//  |---------------------------|------------------|----------------------|
//  |        long long          |      8 bytes     |          %lld        |
//  |---------------------------|------------------|----------------------|
//  |         short             |      2 bytes     |          %d          |
//  |---------------------------|------------------|----------------------|
//  |        unsigned           |      4 bytes     |          %u          |
//  |---------------------------|------------------|----------------------|
//  |         signed            |      4 bytes     |          %d          |
//  |---------------------------|------------------|----------------------|
//  |         void              |      0 bytes     |          %d          |
//  |---------------------------|------------------|----------------------|

// integer data types : the integer data types are used to store the integer value
// 1. int : the int data type is used to store the integer value
// 2. short : the short data type is used to store the integer value
// 3. long : the long data type is used to store the integer value
// 4. long long : the long long data type is used to store the integer value
// 5. unsigned : the unsigned data type is used to store the positive integer value
// 6. signed : the signed data type is used to store the negative and positive integer value
// 7. void : the void data type is used to store the no value

//  rules for the variable.
// 1. variable name should be start with the alphabet or underscore (_)
//  example : int a = 20;

// 2. variable name should not be start with the number
//  example : int 1a = 20; // this is wrong

// 3. variable name should not be start with the special character
//  example : int @a = 20; // this is wrong

// 4. variable name should not be the keyword
//  example : int int = 20; // this is wrong

// 5. variable name should not be the space
//  example : int a b = 20; // this is wrong

// 6. variable name should not be the reserved word
//  example : int main = 20; // this is wrong

// 7. variable name should not be the same
//  example : int a = 20; int a = 30; // this is wrong

// 8. variable name should not be the same with the data type
//  example : int int = 20; // this is wrong

// 9. variable name should not be the same with the function name
//  example : int main = 20; // this is wrong

// 10. variable name should not be the same with the library name
//  example : int stdio = 20; // this is wrong


