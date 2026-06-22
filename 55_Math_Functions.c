#include <stdio.h>
#include <math.h>
int main()
{
    int number1 = 4;
    int number2 = sqrt(number1);
    int number3 = pow(number1, 2);
    int number4 = round(number1);
    printf("The square root of the %d number is %d\n ", number1, number2);
    printf("The power of the %d number is %d\n", number1, number3);
    printf("The round of the %d number is %d", number1, number4);
    return 0;
}

/*
Standard Math Functions Cheat Sheet
1. ceil(x) — CeilingRounds (x) up to the nearest integer. Think of it as pushing the number toward positive infinity.

Example (Positive): ceil(4.2) --> 5.0
Example (Negative): ceil(-4.8) --> -4.0 (because (-4) is greater than (-4.8)

2. floor(x) — FloorRounds (x) down to the nearest integer. It pushes the number toward negative infinity.

Example (Positive): floor(4.8) --> 4.0
Example (Negative): floor(-4.2) --> -5.0 (because (-5) is less than (-4.2))

3. round(x) — RoundRounds (x) to the nearest integer. Halfway cases (like .5) are typically rounded away from zero.

Example (Standard): round(4.3) --> 4.0
Example (Halfway): round(4.5) --> 5.0
Example (Negative Halfway): round(-4.5) --> -5.0

4. trunc(x) — TruncateDrops the decimal part entirely, effectively rounding toward zero.

Example (Positive): trunc(4.8) --> 4.0
Example (Negative): trunc(-4.8) --> -4.0

5. abs(x) — Absolute ValueReturns the magnitude or distance of (x) from zero, completely stripping away any negative sign. It always returns a positive value.

Example (Positive): abs(4.5) --> 4.5
Example (Negative): abs(-4.5) --> 4.5

6. log(x) — LogarithmReturns the natural logarithm (base (e) of (x) by default in most languages (like Python or SQL), though some systems use it for base 10. 
Note: (x) must be greater than 0.

Example (Natural Log): log(2.71828) --> 1.0 (since (e^1 \approx 2.71828))
Example (Base 10, if specified): log10(100) --> 2.0 */