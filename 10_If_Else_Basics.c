/* with if else we can perform set of operation this is used for the decision making in c do some code if a condition is true if the condition is false don't do that
 */
#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    
    if (age ==0)
    {
        printf("enter the valid age ");
    }
    else if (age >= 18)
    {
        printf("You Eligible for vote ");
    }
    else
    {
        printf("you are not Eligible for voting");
    }
    return 0 ;
}