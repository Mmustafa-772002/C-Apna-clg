#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>
#include <windows.h>

int main()
{
    time_t rawtime = 0;
    struct tm *pTime = NULL;
    bool isRunning = true;
    printf("digital clock \n");

    while (isRunning)
    {
        time(&rawtime);
        // printf("%ld\n", rawtime);
        /*
        struct tm
        {
        int tm_sec;  // seconds after the minute [0-60]
        int tm_min;  // minutes after the hour [0-59]
        int tm_hour;  // hours since midnight [0-23]
        int tm_mday;  // day of the month [1-31]
        int tm_mon;  // months since january[0-11]
        int tm_year;  // years since 1900
        int tm_wday;  // days since sunday [0-6]
        int tm_yday;  // days since january 1[0-365]
        int tm_isdst;  // Daylight saving time flag

        };

        */
        pTime = localtime(&rawtime);
        printf("\r%02d:%02d:%02d",pTime->tm_hour,pTime->tm_min,pTime->tm_sec);
        sleep(1);
        // \r is used to return the cursor to the beginning of the line, allowing the next output to overwrite the previous one. This creates the effect of a digital clock updating in place. 
        
    }

    return 0;
}