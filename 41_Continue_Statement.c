#include<stdio.h>
int main ()
{
    for (int i = 0; i <= 10; i++)
    {  
        // continue statement is used to the skip the value from the loop 
        // this will skips the current cycle 
        if (i==4)
        {
            continue;
        }
        
        
        printf("%d\n",i);
        
    }
    

}