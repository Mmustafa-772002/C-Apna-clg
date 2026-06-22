#include <stdio.h>
int main()
{
    int choice;
    float kg;
    float Total;
    printf("---- Weight calculator ----   ");
    printf("\n 1. kg to pound \n 2. kg to ton \n 3. exit ");
    printf("\n Enter your choice : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("\nPlease Enter your weight in kg  :  ");
        scanf("%f", &kg);
        Total = kg * 2.20462;
        printf("Your Total weight in kg to pound is : %.2f", Total);
    }
    else if (choice == 2)
    {
        printf("\nPlease Enter your weight in kg  :  ");
        scanf("%f", &kg);
        Total = kg / 1000;
        printf("Your Total weight in kg to ton is : %.2f", Total);
    }
    else if (choice == 3)
    {
        printf("-----Exit-----");
    }
    else
    {
        printf("please enter the valid choice !");
    }

    return 0;
}