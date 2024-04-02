#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    float sqrt;
    printf("enter the number :");
    scanf("%d", &a);
    sqrt = pow(a, 0.5);
    printf(" the square root of the number is : %f", sqrt);
    return 0;
}
