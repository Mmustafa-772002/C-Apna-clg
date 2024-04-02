// constants : the value of a variable cannot be changed once it is assigned
// examples : const int a = 20;

// types of constants
// 1. integer constant : the integer constant is used to store the integer value
// example :  int a = 20;
//            float b = 34.
//            char c = 'a';
// 2. Real constant : the real constant is used to store the real value
// example : float a = 20.34;
//           double b = 34.56;

// 3. character constant : the character constant is used to store the character value
// example : char a = 'a';
//           char b = 'A';

// 4. string constant : the string constant is used to store the string value
// example : char a[] = "hello world";
//           char b[] = "hello world";

// 5. backslash constant : the backslash constant is used to store the special character value
// example : char a = '\n';
//           char b = '\t';

// 6. octal constant : the octal constant is used to store the octal value
// example : int a = 020;

// keywords : the keywords are the reserves words in the c programming language
// the keywords have special meaning in the c programming language

// there are 32 reserved keywords in the c programming language

// |----------------|------------------|------------------|-------------------|
// |      auto      |     double       |        int       |      struct       |
// |----------------|------------------|------------------|-------------------|
// |      break     |     else         |        long      |      switch       |
// |----------------|------------------|------------------|-------------------|
// |      case      |     enum         |        register  |      typedef      |
// |----------------|------------------|------------------|-------------------|
// |      char      |     extern       |        return    |      union        |
// |----------------|------------------|------------------|-------------------|
// |      const     |     float        |        short     |      unsigned     |
// |----------------|------------------|------------------|-------------------|
// |      continue  |     for          |        signed    |      void         |
// |----------------|------------------|------------------|-------------------|
// |      default   |     goto         |        sizeof    |      volatile     |
// |----------------|------------------|------------------|-------------------|
// |      do        |     if           |        static    |      while        |
// |----------------|------------------|------------------|-------------------|

// use cases of the keywords
// 1. auto : the auto keyword is used to declare the local variable whose type will be automatically deduced by the compiler at runtime 
// example
#include <stdio.h>
int main()
{
    auto int a = 20;
    printf("%d", a);
    return 0;
}

// 2. break : the break keyword is used to terminate the loop or switch statement and transfer the control to the next statement after the loop or switch statement
// example
#include <stdio.h>
int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}

// 3. case : the case keyword is used to define the different cases in the switch statement
// example
#include <stdio.h>
void main()
{
    int a = 2;
    switch (a)
    {
    case 1:
        printf("The value of a is 1");
        break;
    case 2:
        printf("The value of a is 2");
        break;
    case 3:
        printf("The value of a is 3");
        break;
    default:
        printf("The value of a is not 1, 2, 3");
    }
}

// 4. char : the char keyword is used to declare the character data type  variable
// example
#include <stdio.h>
int main()
{
    char a = 'a';
    printf("%c", a);
    return 0;
}

// 5. const : the const keyword is used to declare the constant variable
// example
#include <stdio.h>
int main()
{
    const int a = 20;
    printf("%d", a);
    return 0;
}

// 6. continue : the continue keyword is used to skip the current iteration of the loop and continue with the next iteration
// example
#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}

// 7. default : the default keyword is used to define the default case in the switch statement
#include <stdio.h>
int main()
{
    int a = 3;
    switch (a)
    {
    case 1:
        printf("The value of a is 1");
        break;
    case 2:
        printf("The value of a is 2");
        break;
    default:
        printf("The value of a is not 1 or 2");
    }
    return 0;
}

// 8. do : the do keyword is used to execute the block of code repeatedly until the condition is true
#include <stdio.h>
int main()
{
    int i = 0;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i < 5);
    return 0;
}

// 9. double : the double keyword is used to declare the double data type variable
#include <stdio.h>
int main()
{
    double a = 3.14;
    printf("%lf", a);
    return 0;
}

// 10. else : the else keyword is used to execute the block of code when the condition is false
#include <stdio.h>
int main()
{
    int a = 10;
    if (a > 5)
    {
        printf("a is greater than 5");
    }
    else
    {
        printf("a is less than or equal to 5");
    }
    return 0;
}

// 11. enum : the enum keyword is used to declare the enumeration data type
#include <stdio.h>
enum Day
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main()
{
    enum Day today = WEDNESDAY;

    switch (today)
    {
    case MONDAY:
        printf("Today is Monday");
        break;
    case TUESDAY:
        printf("Today is Tuesday");
        break;
    case WEDNESDAY:
        printf("Today is Wednesday");
        break;
    case THURSDAY:
        printf("Today is Thursday");
        break;
    case FRIDAY:
        printf("Today is Friday");
        break;
    case SATURDAY:
        printf("Today is Saturday");
        break;
    case SUNDAY:
        printf("Today is Sunday");
        break;
    default:
        printf("Invalid day");
    }

    return 0;
}

// 12. extern : the extern keyword is used to declare the external variable

#include <stdio.h>

extern int globalVariable; // Declaration of an external variable

int main()
{
    printf("The value of globalVariable is: %d", globalVariable);
    return 0;
}

int globalVariable = 10; // Definition of the external variable


// 13. float : the float keyword is used to declare the float data type variable
#include <stdio.h>

int main()
{
    float pi = 3.14;
    printf("The value of pi is: %f", pi);
    return 0;
}

// 14. for : the for keyword is used to execute the block of code repeatedly for a fixed number of times
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }
    return 0;
}

// 15. goto : the goto keyword is used to transfer the control to the specified label
#include <stdio.h>

int main()
{
    int num = 10;

    if (num % 2 == 0)
    {
        goto even;
    }
    else
    {
        goto odd;
    }

even:
    printf("Number is even");
    return 0;

odd:
    printf("Number is odd");
    return 0;
}

// 16. if : the if keyword is used to execute the block of code when the condition is true
#include <stdio.h>

int main()
{
    int num = 5;

    if (num > 0)
    {
        printf("Number is positive");
    }

    return 0;
}

// 17. int : the int keyword is used to declare the integer data type variable
#include <stdio.h>

int main()
{
    int age = 25;
    printf("Age: %d", age);
    return 0;
}

// 18. long : the long keyword is used to declare the long data type variable
#include <stdio.h>

int main()
{
    long population = 1000000;
    printf("Population: %ld", population);
    return 0;
}

// 19. register : the register keyword is used to declare the register variable
#include <stdio.h>

int main()
{
    register int count = 5;
    printf("Count: %d", count);
    return 0;
}

// 20. return : the return keyword is used to return the value from the function
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result = add(3, 4);
    printf("Result: %d", result);
    return 0;
}

// 21. short : the short keyword is used to declare the short data type variable
#include <stdio.h>

int main()
{
    short temperature = -10;
    printf("Temperature: %hd", temperature);
    return 0;
}

// 22. signed : the signed keyword is used to declare the signed data type variable
#include <stdio.h>

int main()
{
    signed int number = -15;
    printf("Number: %d", number);
    return 0;
}

// 23. sizeof : the sizeof keyword is used to return the size of the variable
#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Size of array: %d", size);
    return 0;
}

// 24. static : the static keyword is used to declare the static variable
#include <stdio.h>

void increment()
{
    static int count = 0;
    count++;
    printf("Count: %d\n", count);
}

int main()
{
    increment();
    increment();
    increment();
    return 0;
}

// 25. struct : the struct keyword is used to declare the structure data type
#include <stdio.h>

struct Point
{
    int x;
    int y;
};

int main()
{
    struct Point p;
    p.x = 5;
    p.y = 10;
    printf("Coordinates: (%d, %d)", p.x, p.y);
    return 0;
}

// 26. switch : the switch keyword is used to execute the block of code based on the different cases
#include <stdio.h>

int main()
{
    int choice = 2;

    switch (choice)
    {
    case 1:
        printf("Option 1 selected");
        break;
    case 2:
        printf("Option 2 selected");
        break;
    case 3:
        printf("Option 3 selected");
        break;
    default:
        printf("Invalid option");
    }

    return 0;
}

// 27. typedef : the typedef keyword is used to declare the user-defined data type
#include <stdio.h>

typedef struct
{
    int x;
    int y;
} Point;

int main()
{
    Point p;
    p.x = 5;
    p.y = 10;
    printf("Coordinates: (%d, %d)", p.x, p.y);
    return 0;
}

// 28. union : the union keyword is used to declare the union data type
#include <stdio.h>

union Data
{
    int i;
    float f;
    char str[20];
};

int main()
{
    union Data data;
    data.i = 10;
    printf("Data: %d\n", data.i);
    data.f = 3.14;
    printf("Data: %f\n", data.f);
    strcpy(data.str, "Hello");
    printf("Data: %s\n", data.str);
    return 0;
}

// 29. unsigned : the unsigned keyword is used to declare the unsigned data type variable
#include <stdio.h>

int main()
{
    unsigned int number = 10;
    printf("Number: %u\n", number);
    return 0;
}

// 30. void : the void keyword is used to declare the void data type variable
#include <stdio.h>

void printMessage()
{
    printf("Hello, World!\n");
}

int main()
{
    printMessage();
    return 0;
}

// 31. volatile : the volatile keyword is used to declare the volatile variable
#include <stdio.h>

int main()
{
    volatile int count = 0;
    while (count < 5)
    {
        printf("Count: %d\n", count);
        count++;
    }
    return 0;
}

// 32. while : the while keyword is used to execute the block of code repeatedly until the condition is true
#include <stdio.h>

int main()
{
    int i = 1;
    while (i <= 5)
    {
        printf("Value: %d\n", i);
        i++;
    }
    return 0;
}
