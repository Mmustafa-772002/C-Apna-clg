/*
keywords in c programming language
: Total reserved keywords in C programming language are 32.

Total reserved keywords in C programming language are 32.
int , float, char, double, return, if, else, switch, case, for, while, do, break, continue, void, static, const, sizeof, struct, union, enum, typedef, extern, register, volatile, signed, unsigned, long, short, default, goto


|-----|------------|-------------------|--------|
| no. | keyword    | Description       | define |
|-----|------------|-------------------|--------|
| 1   | int        | integer type      |  %d    |
| 2   | float      | floating-point    |  %f    |
| 3   | char       | character type    |  %c    |
| 4   | double     | double-precision  |  %lf   |
| 5   | return     | return from func  |        |
| 6   | if         | conditional stmt  |        |
| 7   | else       | alternative stmt  |        |
| 8   | switch     | multi-way branch  |        |
| 9   | case       | case in switch    |        |
|10   | for        | for loop          |        |
|11   | while      | while loop        |        |
|12   | do         | do-while loop     |        |
|13   | break      | exit loop/switch  |        |
|14   | continue   | skip to next it.  |        |
|15   | void       | no type           |        |
|16   | static     | static storage    |        |
|17   | const      | constant value    |        |
|18   | sizeof     | size of type      |        |
|19   | struct     | structure type    |        |
|20   | union      | union type        |        |
|21   | enum       | enumeration type  |        |
|22   | typedef    | type alias        |        |
|23   | extern     | external linkage  |        |
|24   | register   | register storage  |        |
|25   | volatile   | volatile var      |        |
|26   | signed     | signed type       |        |
|27   | unsigned   | unsigned type     |        |
|28   | long       | long int type     |        |
|29   | short      | short int type    |        |
|30   | default    | default case      |        |
|31   | goto       | jump to label     |        |
|32   | break      | exit loop/switch  |        |
|-----|------------|-------------------|--------|

1. int :
the int keyword is used to declare integer variables, which can store whole numbers without decimal points.
the size of int is typically 4 bytes (32 bits ) on most systems.
for example:
int age = 25 ;

2. float :
the float keyword is used to declare floating-point variables, which can store numbers with decimal points.
the size of float is typically 4 bytes (32 bits) on most systems.
for example:
float pi = 3.14 ;

3. char :
the char keyword is used to declare character variables, which can store single charaters.
the size of char is typically is 1 byte (8 bits) on most systems.
for example:
char grade = 'A' ;

4. double :
the double keyword is used to declare double-percision floating-point  variables,which can store numbers with decimal points with higher precision tham float.
the size of double is typically 8 bytes (64 bits) on most systems.
for example :
double e = 2.1464984646565789;

5. return :
the retun keyword is used to exit from a function and optionally return a value to the caller.
The size of return is not applicable as it is a control statement.
for example:
int add(int a, int b) {
    return a + b;
}

6.if :
the if keyword is used to create conditional stantements that execute a block of code if a specified condition is true.
for example:
if(age>18)
{
    printf("Adult");
}

7. else :
The else keyword is used in conjuncation with if to provide an aternative bock of code that execution when the if condition is false.
for example:
if(age>18)
{
printf("Adult");
}
else
{
printf("minor");
}

8. switch :
the switch keyword is used to create multi-way branch statements that allow the value of a variable to be tested for equality against a list of
possible cases.
for example :
switch (day) {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    default:
        printf("Other day");
}


*/