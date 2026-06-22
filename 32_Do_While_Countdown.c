// Goal: Write a program that asks the user for a positive number and counts down to 1. If the user enters a number less than or equal to 0, it should ask them again until they provide a valid starting number.
#include<stdio.h>
int main()
{
    int  count =0 ;
    
    do
    {
        printf("Enter the number : ");
    scanf("%d",&count);
    } while (count<= 0);
    do
    {
    
    
    
        printf("%d\n",count);
        count--;
    
        /* code */
    } while (count>0 );
    
    return  0;
}