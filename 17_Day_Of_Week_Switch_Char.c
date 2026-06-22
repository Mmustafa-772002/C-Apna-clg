#include <stdio.h>
int main()
{
    char day= '\0';
    printf("Please enter the initial of day of week :M,T,W,R,F,S,U: ");
    scanf(" %c",&day);
    switch (day)
    {
    case 'M':
        printf("Monday");
        break;
    case 'T':
        printf("tuesday");
        break;
    case 'W':
        printf("wednesday");
        break;
    case 'R':
        printf("Thursday");
        break;
    case 'F':
        printf("Friday");
        break;
    case 'S':
        printf("Saturday");
        break;
    case 'U':
        printf("Sunday");
        break;

    default:
        printf("please enter the valid number !");
        break;
    }
}