#include <stdio.h>

int main()
{
    int hours, minutes;

    // 1. Ask for input
    printf("Please enter the time in 24-hour format (HH:MM): ");
    
    // 2. Validate that scanf successfully matched both numbers
    if (scanf("%d:%d", &hours, &minutes) != 2) {
        printf("Error: Invalid format. Please use HH:MM.\n");
        return 1;
    }

    // 3. Validate that the time actually exists
    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
        printf("Error: Invalid time entered.\n");
        return 1;
    }

    // 4. Determine AM or PM (Strictly less than 12 is AM)
    printf("This time is %s\n", (hours < 12) ? "AM" : "PM");

    return 0;
}