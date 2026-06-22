#include <stdio.h>
int main()
{
    int day;
    printf("Please enter the day of week : ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("tuesday");
        break;
    case 3:
        printf("wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;

    default:
        printf("please enter the valid number !");
        break;
    }
}

// break statement used to break the operation that is used to stop the program at the specific steps 
// default this statement is like the else statement which used if any of the condition not met then default code is executed 
