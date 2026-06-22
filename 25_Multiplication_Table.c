#include <stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
        
            printf("%4d ", i *j);
            // %4d is added for the spaces with format specifier 
        }
        printf("\n");
    }
    return 0 ;
}