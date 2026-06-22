#include <stdio.h>
#include<windows.h>
int main()
{
    for (int i = 10; i >= 1; i--)
    {
        Sleep(1000); // this method is used to get the effect and S is capital in windows 
        // sleep(1) this is for unix and mac s should be small 
        printf("%d\n", i);
    }
    printf("Happy Birthday ! ");
    return 0;
}


// to get the effect of the countdown blinking we have to use header file name <windows> -- this is used fore the windows <unistd> -- unix and mac 

// in windows the time is calculated in the miliseconds and in mac and linux the time is calculated in the seconds 