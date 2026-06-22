// variable scope : refers to where a variable can be accessed in a program
// variable can share the name if they are in different scopes
#include <stdio.h>

// int result = 0 ; this make the entire part of the function as the global variable (and also it is hard to debug )  
int add(int x, int y)
{
    int result = x + y; // these are the local variables
    return result;
}
// in this we written same variables for the reuse the same variable out of the scope
int sub(int x, int y)
{
    int result = x - y;
    return result;
}
int mul(int x, int y)
{
    int result = x * y;
    return result;
}
int div(int x, int y)
{
    int result = x / y;
    return result;
}

int main()
{
    // int result = add(3, 4);
    // printf("%d", result);

    // int result = sub(3, 4);
    // printf("%d", result);

    // int result = mul(3, 4);
    // printf("%d", result);

    int result = div(3, 4);
    printf("%d", result);
    // in this program the c variable the same variable can't be used in the same scope 
    // variables in the same scope they can't be share there names
    return 0;
}