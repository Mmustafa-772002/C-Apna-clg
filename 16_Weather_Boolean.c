#include<stdio.h>
#include<stdbool.h>
int main ()
{

    // this ! is used to says that the condition is false and if the condition is false then it will execute the code inside the if block and if the condition is true then it will execute the code inside the else block

    bool weather=1 ;
    if (!weather)
    {
        printf("The weather is cloudy Outside");
    }
    else
    {
        printf("The weather is Sunny Outside");
    }
    

    return 0;

}