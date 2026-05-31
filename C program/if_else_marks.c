#include <stdio.h>
int main()
{
    int marks;
    printf("Please enter your marks :");
    scanf("%d", &marks);
    if (marks < 0 || marks > 100)
    {
        printf("please enter valid marks ");
    }
    else if (marks >= 35)
    {
        printf("You passed the exam");
    }

    else
    {
        printf("You failed the exam");
    }
}