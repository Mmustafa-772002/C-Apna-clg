#include <stdio.h>
int main()
{
    int marks;
    printf("Please enter the marks : ");
    scanf("%d", &marks);
    if (marks < 0 || marks > 100)
    {
        printf("Invalid marks");
    }
    else if (marks <= 35)
    {
        printf("you are passed the exam  ");
    }
    else if (marks <= 55)
    {
        printf("you are passed the exam and have c grades ");
    }
    else if (marks <= 75)
    {
        printf("you are passed the exam and have b grades ");
    }
    else if (marks <= 95)
    {
        printf("you are passed the exam and have a grades ");
    }
    else
    {
        printf("you are passed the exam and have a+ grades  ");
    }
    return 0;
}