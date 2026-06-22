#include <stdio.h>
int main()
{
    // for (int i = 50; i >= 1; i--)
    // for decrementing the value of the syntax is : for (initialization; condition; decrement)
    // for (int i = 50; i >= 1; i -= 2)
    for (int i = 50; i >= 0; i -= 3)
    // for (size_t i = 50; i >= 0; i -= 3)
    // Dont use size_t : In C, size_t is an unsigned integer type. This means it can never hold a negative number. It only represents 0 and positive integers.
    {
        printf("%d\n", i);
    }
    return 0;
}