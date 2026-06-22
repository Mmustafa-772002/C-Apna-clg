/* for loop : repeat a block of code a specific number of times (Initialization, Condition, Increment/Decrement)
for (initialization; condition; increment/decrement) {
    code block to be executed
}
for loop is used when the number of iterations is known before entering the loop.


*/

#include <stdio.h>
int main()
{
    for (size_t i = 0; i <= 100; i += 2)
    //  for (size_t i = 1; i <= 10; i+=2) this block will run the code starting value from the 1
    // for (size_t i = 1; i <= 10; i+=2) this block will run ther code increment by 2 in the value
    // for (size_t i = 1; i <= 10; i+=3) this block will run ther code increment by 3 in the value
    {
        printf("\n%d", i);
    }
}