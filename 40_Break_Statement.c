#include<stdio.h>
int main ()
{
    for (int i = 0; i <= 10; i++)
    {   
        // break statement can stop the loop and takes out from the loop this is escape from the loop
        if (i==4)
        {
            break;
        }
        
        
        printf("%d\n",i);
        
    }
    

}