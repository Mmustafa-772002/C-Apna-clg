#include <stdio.h>
#include<stdlib.h>
int main()
{
    // mallac
    int number = 0;
    printf("please enter the number : ");
    scanf("%d", &number);

    char *grade = malloc(number * sizeof(char));
    if (grade == NULL)
    {
        printf("memory allocation fail ");
        return 1;
    }

    for (int i = 0; i < number; i++)
    {
        printf("\nEnter grade number integer certain number  %d: ", i + 1);
        scanf(" %c", &grade[i]);
    }
     for (int i = 0; i < number; i++)
    {
        printf("\nThe grades are: %c ",grade[i]);
    
    }
    printf("\n");

    free(grade); // returning the rented space back to os
    grade = NULL;
    return 0;
}