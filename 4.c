// comments  : the comments in c programming that is the human readable code in the written for the future use in the programmers the compiler neglect this lines for the execution of the program

// there are the types in the comments

// Single-line comments: These are created using two forward slashes (//) followed by the comment text. Everything after the // on that line is considered a comment and will be ignored by the compiler.
// Multi-line comments: These are created using a forward slash followed by an asterisk (/*) at the beginning of the comment, and an asterisk followed by a forward slash (*/) at the end. Anything in between these two markers is considered a comment, and this form can span multiple lines.

// structure :
// compilation : compilation is the process in which the source code is converted into the machine code that is the executable code that is the code that is executed by the computer the compilation is done by the compiler that is the software that is used to convert the source code into the machine code the compilation is done in the following steps

// 1. Preprocessing: This is the first step in the compilation process. In this step, the preprocessor directives are processed. The preprocessor directives are the commands that start with a # symbol. The preprocessor directives are used to include header files, define macros, and perform other tasks. The preprocessor directives are processed by the preprocessor, which is a part of the compiler. The preprocessor directives are processed before the actual compilation of the source code.

// 2. Compilation: This is the second step in the compilation process. In this step, the source code is converted into the assembly code. The assembly code is a low-level representation of the source code that is closer to the machine code. The compilation is done by the compiler, which is a software tool that is used to convert the source code into the assembly code.

// 3. Assembly: This is the third step in the compilation process. In this step, the assembly code is converted into the object code. The object code is a binary representation of the source code that is closer to the machine code. The assembly is done by the assembler, which is a software tool that is used to convert the assembly code into the object code.

// 4. Linking: This is the final step in the compilation process. In this step, the object code is combined with the library code to create the executable code. The library code is a collection of precompiled code that is used by the source code. The linking is done by the linker, which is a software tool that is used to combine the object code with the library code to create the executable code.

// Block diagram for the compilation process
//    |-------------------|
//    |  Preprocessing    |   // the first step in the compilation process
//    |-------------------|
//             |
//             V
//    |-------------------|
//    |   Compilation     |   // the second step in the compilation process
//    |-------------------|
//             |
//             V
//    |-------------------|
//    |    Assembly       |   // the third step in the compilation process
//    |-------------------|
//             |
//             V
//    |-------------------|
//    |     Linking       |  // the final step in the compilation process
//    |-------------------|

// input : the input in the c programming is the data that is given by the user that can be stored in the container that is the variable that is used to store the data the input can be taken by the user in the following ways

// the c programming have function to take the input from the user that is the scanf() function that is used to take the input from the user the scanf() function is used to take the input from the user in the following way

// q - write a program to calculate area of square
#include <stdio.h>

// q - write a program to calculate the area of the square
int main()
{
    int side, area;
    printf("enter the side of the square :");        // prompt user to enter the side of the square
    scanf("%d", &side);                              // read the side of the square from the user
    area = side * side;                              // calculate the area of the square
    printf(" the area of the square is : %d", area); // display the area of the square
    return 0;
}

// q - write a program to calculate the area of the rectangle
#include <stdio.h>
int main()
{
    int length, breadth, area;
    printf("enter the length of the rectangle :");
    scanf("%d", &length);
    printf("enter the breadth of the rectangle :");
    scanf("%d", &breadth);
    area = length * breadth;
    printf(" the area of the rectangle is : %d", area);
    return 0;
}

// q - write a program to calculate the area of the circle

#include <stdio.h>
int main()
{
    int radius;
    float area;
    printf("enter the radius of the circle :");
    scanf("%d", &radius);
    area = 3.14 * radius * radius;
    printf(" the area of the circle is : %f", area);
    return 0;
}

// q - write a program to calculate the area of the triangle

#include <stdio.h>
int main()
{
    int base, height, area;
    printf("enter the base of the triangle :");
    scanf("%d", &base);
    printf("enter the height of the triangle :");
    scanf("%d", &height);
    area = 0.5 * base * height;
    printf(" the area of the triangle is : %d", area);
    return 0;
}

// q - write a program to calculate the area of the trapezium and perimeter

#include <stdio.h>
int main()
{
    int a, b, h, area, perimeter;
    printf("enter the first side of the trapezium :");
    scanf("%d", &a);
    printf("enter the second side of the trapezium :");
    scanf("%d", &b);
    printf("enter the height of the trapezium :");
    scanf("%d", &h);
    area = 0.5 * (a + b) * h;
    perimeter = a + b + 2 * h;
    printf(" the area of the trapezium is : %d", area);
    printf(" the perimeter of the trapezium is : %d", perimeter);
    return 0;
}

// q - write a program to add two numbers

#include <stdio.h>
int main()
{
    int a, b, sum;
    printf("enter the first number :");
    scanf("%d", &a);
    printf("enter the second number :");
    scanf("%d", &b);
    sum = a + b;
    printf(" the sum of the two numbers is : %d", sum);
    return 0;
}

// q - write a program to subtract two numbers

#include <stdio.h>
int main()
{
    int a, b, sub;
    printf("enter the first number :");
    scanf("%d", &a);
    printf("enter the second number :");
    scanf("%d", &b);
    sub = a - b;
    printf(" the subtraction of the two numbers is : %d", sub);
    return 0;
}

// q - write a program to multiply two numbers

#include <stdio.h>
int main()
{
    int a, b, mul;
    printf("enter the first number :");
    scanf("%d", &a);
    printf("enter the second number :");
    scanf("%d", &b);
    mul = a * b;
    printf(" the multiplication of the two numbers is : %d", mul);
    return 0;
}

// q - write a program to divide two numbers

#include <stdio.h>
int main()
{
    int a, b, div;
    printf("enter the first number :");
    scanf("%d", &a);
    printf("enter the second number :");
    scanf("%d", &b);
    div = a / b;
    printf(" the division of the two numbers is : %d", div);
    return 0;
}

// q - write a program to calculate the remainder of the two numbers

#include <stdio.h>
int main()
{
    int a, b, rem;
    printf("enter the first number :");
    scanf("%d", &a);
    printf("enter the second number :");
    scanf("%d", &b);
    rem = a % b;
    printf(" the remainder of the two numbers is : %d", rem);
    return 0;
}

// q - write a program to calculate the power of the number

#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, power;
    printf("enter the base number :");
    scanf("%d", &a);
    printf("enter the power number :");
    scanf("%d", &b);
    power = pow(a, b);
    printf(" the power of the two numbers is : %d", power);
    return 0;
}

// q - write a program to calculate the square root of the number

#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    float sqrt;
    printf("enter the number :");
    scanf("%d", &a);
    sqrt = pow(a,0.5);
    printf(" the square root of the number is : %f", sqrt);
    return 0;
}

// r - write a program that can calculate the simple interest and compound interest
// formulas : simple interest = (p * r * t) / 100
// compound interest = p * (1 + r / 100) ^ t - p

#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t, si, ci;
    printf("enter the principal amount :");
    scanf("%f", &p);
    printf("enter the rate of interest :");
    scanf("%f", &r);
    printf("enter the time period :");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    ci = p * (pow((1 + r / 100), t)) - p;
    printf(" the simple interest is : %f", si);
    printf(" the compound interest is : %f", ci);
    return 0;
}

// 11. fahrenheit to celsius program

#include <stdio.h>

int main()
{
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("Temperature in Celsius: %.2f", celsius);

    return 0;
}

// 12. celsius to fahrenheit program

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit: %.2f", fahrenheit);

    return 0;
}

//  some math formulas that are used in the c programming

// 1. Area of the square: The area of a square is given by the formula A = side * side, where A is the area and side is the length of a side of the square.
// formula : A = side * side

// 2. Area of the rectangle: The area of a rectangle is given by the formula A = length * breadth, where A is the area, length is the length of the rectangle, and breadth is the breadth of the rectangle.
// formula : A = length * breadth

// 3. Area of the circle: The area of a circle is given by the formula A = π * r * r, where A is the area, π is a constant approximately equal to 3.14159, and r is the radius of the circle.
// formula : A = π * r * r

// 4. Area of the triangle: The area of a triangle is given by the formula A = 0.5 * base * height, where A is the area, base is the base of the triangle, and height is the height of the triangle.
// formula : A = 0.5 * base * height

// 5. Area of the trapezium: The area of a trapezium is given by the formula A = 0.5 * (a + b) * h, where A is the area, a and b are the lengths of the parallel sides of the trapezium, and h is the height of the trapezium.
// formula : A = 0.5 * (a + b) * h

// 6. Perimeter of the trapezium: The perimeter of a trapezium is given by the formula P = a + b + 2 * h, where P is the perimeter, a and b are the lengths of the parallel sides of the trapezium, and h is the height of the trapezium.
// formula : P = a + b + 2 * h

// 7. Addition of two numbers: The sum of two numbers is given by the formula sum = a + b, where sum is the sum of the two numbers, and a and b are the two numbers.
// formula : sum = a + b

// 8. Subtraction of two numbers: The difference of two numbers is given by the formula sub = a - b, where sub is the difference of the two numbers, and a and b are the two numbers.
// formula : sub = a - b

// 9. Multiplication of two numbers: The product of two numbers is given by the formula mul = a * b, where mul is the product of the two numbers, and a and b are the two numbers.
// formula : mul = a * b

// 10. Division of two numbers: The division of two numbers is given by the formula div = a / b, where div is the division of the two numbers, and a and b are the two numbers.
// formula : div = a / b

// 11. Remainder of two numbers: The remainder of two numbers is given by the formula rem = a % b, where rem is the remainder of the two numbers, and a and b are the two numbers.
// formula : rem = a % b

// 12. Power of a number: The power of a number is given by the formula power = pow(a, b), where power is the power of the number a raised to the power b, and a and b are the two numbers.
// formula : power = pow(a, b)

// 13. Square root of a number: The square root of a number is given by the formula sqrt = sqrt(a), where sqrt is the square root of the number a, and a is the number.
// formula : sqrt = sqrt(a)

// 14. Simple interest: The simple interest is given by the formula si = (p * r * t) / 100, where si is the simple interest, p is the principal amount, r is the rate of interest, and t is the time period.
// formula : si = (p * r * t) / 100

// 15. Compound interest: The compound interest is given by the formula ci = p * (1 + r / 100) ^ t - p, where ci is the compound interest, p is the principal amount, r is the rate of interest, and t is the time period.
// formula : ci = p * (1 + r / 100) ^ t - p

// 16. Fahrenheit to Celsius: The conversion of Fahrenheit to Celsius is given by the formula celsius = (fahrenheit - 32) * 5 / 9, where celsius is the temperature in Celsius, and fahrenheit is the temperature in Fahrenheit.
// formula : celsius = (fahrenheit - 32) * 5 / 9

// 17. Celsius to Fahrenheit: The conversion of Celsius to Fahrenheit is given by the formula fahrenheit = (celsius * 9 / 5) + 32, where fahrenheit is the temperature in Fahrenheit, and celsius is the temperature in Celsius.
// formula : fahrenheit = (celsius * 9 / 5) + 32

// 18. Kilometers to Miles: The conversion of kilometers to miles is given by the formula miles = kilometers * 0.621371, where miles is the distance in miles, and kilometers is the distance in kilometers.
// formula : miles = kilometers * 0.621371

// 19. Miles to Kilometers: The conversion of miles to kilometers is given by the formula kilometers = miles / 0.621371, where kilometers is the distance in kilometers, and miles is the distance in miles.
// formula : kilometers = miles / 0.621371

// list of the programs that are used in the c programming
// 1. hello world program
// 2. addition program
// 3. subtraction program
// 4. multiplication program
// 5. division program
// 6. remainder program
// 7. power program
// 8. square root program
// 9. simple interest program
// 10. compound interest program
// 11. fahrenheit to celsius program
// 12. celsius to fahrenheit program
// 13. kilometers to miles program
// 14. miles to kilometers program
// 15. area of the square program
// 16. area of the rectangle program
// 17. area of the circle program
// 18. area of the triangle program
// 19. area of the trapezium program
// 20. perimeter of the trapezium program
// 21. even odd program
// 22. prime number program
// 23. palindrome number program
// 24. armstrong number program
// 25. fibonacci series program
// 26. factorial program
// 27. sum of digits program
// 28. reverse of the number program
// 29. swap two numbers program
// 30. largest of the two numbers program
// 31. largest of the three numbers program
// 32. positive negative program
// 33. leap year program
// 34. vowel consonant program
// 35. alphabet program
// 36. ascii value program
// 37. lower upper program
// 38. multiplication table program
// 39. sum of natural numbers program
// 40. sum of n natural numbers program
// 41. sum of the digits of the number program
// 42. reverse of the string program
// 43. palindrome string program
// 44. factorial of the number program
// 45. prime number in the range program
// 46. armstrong number in the range program
// 47. fibonacci series program
// 48. sum of the series program
// 49. lcm of the two numbers program
// 50. hcf of the two numbers program

// even odd program
#include <stdio.h>
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }
    return 0;
}

// prime number program
#include <stdio.h>
int main()
{
    int num, i, flag = 0;
    printf("enter the number :");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("the number is prime");
    }
    else
    {
        printf("the number is not prime");
    }
    return 0;
}

// palindrome number program
#include <stdio.h>
int main()
{
    int num, rev = 0, temp, rem;
    printf("enter the number :");
    scanf("%d", &num);
    temp = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if (temp == rev)
    {
        printf("the number is palindrome");
    }
    else
    {
        printf("the number is not palindrome");
    }
    return 0;
}

// armstrong number program
#include <stdio.h>
#include <math.h>
int main()
{
    int num, temp, rem, sum = 0, n = 0;
    printf("enter the number :");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        temp = temp / 10;
        n++;
    }
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + pow(rem, n);
        temp = temp / 10;
    }
    if (num == sum)
    {
        printf("the number is armstrong");
    }
    else
    {
        printf("the number is not armstrong");
    }
    return 0;
}

// fibonacci series program
#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, c, i;
    printf("enter the number of terms :");
    scanf("%d", &n);
    printf("the fibonacci series is :");
    printf("%d %d", a, b);
    for (i = 2; i < n; i++)
    {
        c = a + b;
        printf(" %d", c);
        a = b;
        b = c;
    }
    return 0;
}

// factorial program
#include <stdio.h>
int main()
{
    int num, fact = 1, i;
    printf("enter the number :");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("the factorial of the number is : %d", fact);
    return 0;
}

// sum of digits program
#include <stdio.h>
int main()
{
    int num, sum = 0, rem;
    printf("enter the number :");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("the sum of the digits is : %d", sum);
    return 0;
}

// reverse of the number program
#include <stdio.h>
int main()
{
    int num, rev = 0, rem;
    printf("enter the number :");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    printf("the reverse of the number is : %d", rev);
    return 0;
}

// swap two numbers program
#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("enter the first number :");
    scanf("%d", &a);
    printf("enter the second number :");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("the first number after swapping is : %d", a);
    printf("the second number after swapping is : %d", b);
    return 0;
}

// largest of the two numbers program
#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the first number :");
    scanf("%d", &a);
    printf("enter the second number :");
    scanf("%d", &b);
    if (a > b)
    {
        printf("the largest number is : %d", a);
    }
    else
    {
        printf("the largest number is : %d", b);
    }
    return 0;
}

// largest of the three numbers program
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the first number :");
    scanf("%d", &a);
    printf("enter the second number :");
    scanf("%d", &b);
    printf("enter the third number :");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("the largest number is : %d", a);
    }
    else if (b > a && b > c)
    {
        printf("the largest number is : %d", b);
    }
    else
    {
        printf("the largest number is : %d", c);
    }
    return 0;
}

// positive negative program
#include <stdio.h>
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("the number is positive");
    }
    else if (num < 0)
    {
        printf("the number is negative");
    }
    else
    {
        printf("the number is zero");
    }
    return 0;
}

// leap year program
#include <stdio.h>
int main()
{
    int year;
    printf("enter the year :");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("the year is leap year");
            }
            else
            {
                printf("the year is not leap year");
            }
        }
        else
        {
            printf("the year is leap year");
        }
    }
    else
    {
        printf("the year is not leap year");
    }
    return 0;
}

// vowel consonant program
#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character :");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("the character is vowel");
    }
    else
    {
        printf("the character is consonant");
    }
    return 0;
}

// alphabet program
#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character :");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("the character is alphabet");
    }
    else
    {
        printf("the character is not alphabet");
    }
    return 0;
}

// ascii value program-
#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character :");
    scanf("%c", &ch);
    printf("the ascii value of the character is : %d", ch);
    return 0;
}

// lower upper program - concept : the ascii value of the lower case alphabets is from 97 to 122 and the ascii value of the upper case alphabets is from 65 to 90
// This program checks whether a character is lowercase, uppercase, or not an alphabet.

#include <stdio.h>

int main()
{
    char ch;
    printf("enter the character :");
    scanf("%c", &ch);

    // Check if the character is lowercase
    if (ch >= 'a' && ch <= 'z')
    {
        printf("the character is lower case");
    }
    // Check if the character is uppercase
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("the character is upper case");
    }
    // If the character is not an alphabet
    else
    {
        printf("the character is not an alphabet");
    }

    return 0;
}

// 38. Multiplication table program
void multiplicationTableProgram()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

// 39. Sum of natural numbers program
void sumOfNaturalNumbersProgram()
{
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("The sum of natural numbers from 1 to %d is %d\n", n, sum);
}

// 40. Sum of n natural numbers program
void sumOfNNaturalNumbersProgram()
{
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("The sum of first %d natural numbers is %d\n", n, sum);
}

// 41. Sum of the digits of the number program
void sumOfDigitsProgram()
{
    int num, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }

    printf("The sum of digits of the number is %d\n", sum);
}

// 42. Reverse of the string program
void reverseStringProgram()
{
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    printf("The reverse of the string is: ");
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}

// 43. Palindrome string program
void palindromeStringProgram()
{
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    int isPalindrome = 1;
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
    {
        printf("The string is a palindrome\n");
    }
    else
    {
        printf("The string is not a palindrome\n");
    }
}

// 44. Factorial of the number program
int factorialProgram(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorialProgram(n - 1);
    }
}

// 45. Prime number in the range program
void primeNumberInRangeProgram()
{
    int start, end;
    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++)
    {
        int isPrime = 1;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

// 46. Armstrong number in the range program
void armstrongNumberInRangeProgram()
{
    int start, end;
    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d are: ", start, end);
    for (int num = start; num <= end; num++)
    {
        int originalNum = num;
        int sum = 0;
        int digits = 0;

        while (originalNum != 0)
        {
            originalNum /= 10;
            digits++;
        }

        originalNum = num;
        while (originalNum != 0)
        {
            int remainder = originalNum % 10;
            sum += pow(remainder, digits);
            originalNum /= 10;
        }

        if (num == sum)
        {
            printf("%d ", num);
        }
    }
    printf("\n");
}

// 47. Fibonacci series program
void fibonacciSeriesProgram()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int first = 0, second = 1;
    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", first);
        int next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

// 48. Sum of the series program
void sumOfSeriesProgram()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }

    printf("The sum of the series is %.2f\n", sum);
}

// 49. LCM of the two numbers program
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

void lcmOfTwoNumbersProgram()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = lcm(num1, num2);
    printf("The LCM of %d and %d is %d\n", num1, num2, result);
}
// 50. HCF of the two numbers program
int hcf(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return hcf(b, a % b);
    }
}

void hcfOfTwoNumbersProgram()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = hcf(num1, num2);
    printf("The HCF of %d and %d is %d\n", num1, num2, result);
}
