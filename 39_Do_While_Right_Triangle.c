// Problem 2: The Right-Angled Triangle (Intermediate)
// Goal: Print a triangle where the number of stars matches the row number.

// Plaintext
// * * * * * * * * * * ```

// #### 💡 Hint
/* Look at the logic:
* Row 1 has 1 star.
* Row 2 has 2 stars.
* Row 3 has 3 stars.
* Row $N$ has $N$ stars.
Your inner loop condition shouldn't stop at a fixed number like `4`; it should stop when `col <= row`.  */

// #include <stdio.h>
// int main()
// {
//     int total_row, start_row = 1, star;
//     printf("please enter the choice : ");
//     scanf("%d", &total_row);
//     do
//     {
//         star = 0;
//         do
//         {
//             printf("* ");
//             star++;
//         } while (star < start_row);
//         printf("\n");
//         start_row++;

//     } while (total_row >= start_row);
//     return 0;
// }


#include<stdio.h>
int main ()
{
    int current , start = 1 , star ;
    printf("Enter the number of row to print :");
    scanf("%d",&current);
    do
    {
        star = 0 ;
        do
        {
            printf("* ");
            star++;
        } while (star <start);
        printf("\n");
        start++;        
    } while (current >=start);
    
}