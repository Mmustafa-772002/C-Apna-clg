#include <stdio.h>
int main()
{

    int number[50] = {};
    // printf("\nenter the data to add in array : ");
    // scanf("%d", &number[0]);
    // printf("\nenter the data to add in array : ");
    // scanf("%d", &number[1]);
    // printf("\nenter the data to add in array : ");
    // scanf("%d", &number[2]);
    // printf("\nenter the data to add in array : ");
    // scanf("%d", &number[3]);
    // printf("\nenter the data to add in array : ");
    // scanf("%d", &number[4]);
    // printf("\nenter the data to add in array : ");
    // scanf("%d", &number[5]);
    // printf("\nenter the data to add in array : ");
    // scanf("%d", &number[6]);
    for (int j = 0; j < 6; j++)
    {
        printf("\nenter the data to add in array : ");
        scanf("%d", &number[j]);

        for (int i = 0; i < 6; i++)
        {

            printf("%d ", number[i]);
        }
    }
    return 0 ;
}
