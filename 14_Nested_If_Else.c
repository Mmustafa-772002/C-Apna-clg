#include <stdio.h>
#include <stdbool.h>
int main()
{
    float prize, total;

    bool isStudent;
    bool isSenior;
    int studentInput,seniorInput;
    printf("please enter the value of the item : ");
    scanf("%f", &prize);
    // Prompting 1 or 0 makes it compatible with %d
    printf("Are you a student? (1 for true, 0 for false): ");
    scanf("%d", &studentInput);
    isStudent = (studentInput != 0); // Converts the int to a proper bool
    

    printf("Are you a senior? (1 for true, 0 for false): ");
    scanf("%d", &seniorInput);
    isSenior = (seniorInput != 0); // Converts the int to a proper bool

    if (isStudent == 1)
    {
        if (isSenior == 0)
        {
            total = (prize * 10) / 100;
            prize = prize - total;
            printf("you will get the 10 of student discount on item The item value is : %.2f ", prize);
        }
        else
        {
            total = prize * 5 / 100;
            prize = prize - total;
            printf("you are Student but senior you will get 5 discount on item The item value is : %.2f ", prize);
        }
    }
    else
    {
        printf("You have to pay %.2f  ", prize);
    }
    return 0;
}