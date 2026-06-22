#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool isRunning = true;
    char response = '\0';

    while (isRunning)
    {
        printf("You are playing a game ");
        printf("please enter would you like to continue type Y or N : ");
        scanf(" %c", &response);
        if (response != 'Y' && response != 'y')
        {
            isRunning = false;
        }
    }
    printf("You exited from the game ");

    return 0;
}