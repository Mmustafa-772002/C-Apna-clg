// Problem 3: The Inverted Triangle (Intermediate)
// Goal: Print a triangle that starts wide and shrinks.

// Plaintext
// * * * * * * * * * * ```

// #### 💡 Hint
// Instead of starting your `row` counter at `1` and going up, try starting your `row` counter at `4` and counting *down* (`row--`). That way, the first row gets 4 stars, the next gets 3, and so on.

// this will prints the value from the value inside the variable
// #include <stdio.h>
// int main()
// {
//     int row = 4, star;
//     do
//     {
//         star=0;

//         do
//         {
//             printf("* ");
//             star++;
//         } while (star < row);
//         printf("\n");
//         row--;
//     } while (row > 0);
// }

// This take the user input int the number of value to print

// #include <stdio.h>
// int main()
// {
//     int row, star;
//     printf("please enter number of rows to print : ");
//         scanf("%d", &row);

//     do
//     {

//         star = 0;

//         do
//         {
//             printf("* ");
//             star++;
//         } while (star < row);
//         printf("\n");
//         row--;
//     } while (row > 0);
//     return 0;
// }

// This take the user input int the number of value to print  number of star
#include <stdio.h>
int main()
{
    int star, row;
    printf("please enter the number of star to print : ");
    scanf("%d", &row);
    do
    {
        star = 0;

        do
        {
            printf("* ");
            star++;
        } while (star < row);
        printf("\n");
        row--;
    } while (row > 0);
    return 0;
}
