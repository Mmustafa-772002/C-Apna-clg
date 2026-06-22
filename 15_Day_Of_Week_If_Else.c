#include<stdio.h>
int main()
{
    int day;
    printf("Please enter the day number : ");
    scanf("%d",&day);
    if (day==1)
    {
        printf("Monday");
    }
    else if (day==2)
    {
        printf("tuesday");
    }
    else if (day==3)
    {
        printf("wednesday");
    }else if (day==4)
    {
        printf("Thursday");
    }else if (day==5)
    {
        printf("friday");
    }else if (day==6)
    {
        printf("saturday");
    }else if (day==7)
    {
        printf("sunday");
    }
    else 
    {
        printf("Please enter valid choice !");
    }
    return 0 ;



    
}