#include<stdio.h>
int main()
{
    int age ;
    printf("Please enter your age :");
    scanf("%d",&age);
    if (age <= 0)
    {
        printf("Please re-enter The valid age");
        
    }
    else if (age >= 18)
    {
        printf("you are elligible for voting \n");
        printf("Thank you !");
    }
    else
    {
        printf("You are not elligible for the voting \n");
        printf("Thank you !");
    }
    return 0;
    
    
}