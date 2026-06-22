#include <stdio.h>
#include <math.h>
int cube(int num)
{
    int result = pow(num, 3);
    return result;
}
int main()
{
    int x = cube(3);
    int y = cube(4);
    int z = cube(5);
    printf("\n%d", x);
    printf("\n%d", y);
    printf("\n%d", z);
    return 0;
}