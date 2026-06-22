// nested loops in c : this condition is like the loop is inside the loop
#include <stdio.h>
int main()
{
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d\n", j);
        }
    }
}