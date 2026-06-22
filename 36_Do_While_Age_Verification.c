// Problem 5: Age Verification Range (Data Validation)
// Goal: Imagine you are building a registration form for a movie theater. Moviegoers must be between 12 and 100 years old to buy a ticket online. Write a program that forces the user to enter an age within this specific range. If they type something outside of it (like 10 or 105), it must prompt them again.

#include <stdio.h>
int main()
{
    int age;
    do
    {
        printf("enter Your age : ");
        scanf("%d", &age);
        if (age < 12 || age > 100)
        {
            printf("Invalid age! Access denied.\n");
        }
    } while (age <= 10 || age >= 105);
    printf("Age verified successfully! Proceeding to ticket checkout.\n");
}