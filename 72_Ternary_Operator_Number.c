#include <stdio.h>
int main()
{
    int number;
    printf("Please enter a number : ");
    scanf("%d", &number);
    printf("The number %d is divisible by 2 : %s", number, (number % 2 == 0) ? "Yes" : "NO");
}