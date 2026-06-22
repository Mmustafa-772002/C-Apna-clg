#include <stdio.h>
/*enum Day
{
    // The constant should be in uppercase
    SUNDAY = 1,
    MONDAY = 2,
    TUESDAY = 3,
    wednesday = 4,
    THURSDAY = 5,
    FRIDAY = 6,
    SATURDAY = 7
};
*/
typedef enum
{
    // The constant should be in uppercase
    SUNDAY = 1,
    MONDAY = 2,
    TUESDAY = 3,
    WEDNESDAY = 4,
    THURSDAY = 5,
    FRIDAY = 6,
    SATURDAY = 7
} Day; 
int main()
{
    /*enum : enum is user defined data types that consists of the set of the named
    integer constants
    Benefits : replaces numbers with readable names

    sunday = 1;
    monday = 2;
    tuesday = 3 ;
    */
     Day today = MONDAY;
    printf("%d", today);
    if (today == SUNDAY || today == SATURDAY)
    {
        printf("\nToday is weekend");
    }
    else
    {
        printf("\nToday is weekday");
    }
}