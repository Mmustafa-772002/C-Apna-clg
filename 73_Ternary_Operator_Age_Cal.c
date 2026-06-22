#include <stdio.h>
int main()
{
    int age;
    printf("Please Enter your age : ");
    scanf("%d", &age);
    printf("Your age is %d and you are %s", age, (age <= 18) ? "Minor" : "Adult");
    return 0;
}