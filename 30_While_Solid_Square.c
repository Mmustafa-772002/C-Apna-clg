// Problem 1: The Solid Square (Basic)Goal: Print a $4 \times 4$ square of stars.Plaintext* * * * * * * * * * * * * * * * ```

// #### 💡 Hint
// You need an outer loop that runs 4 times (for 4 rows). Inside it, you need an inner loop that also runs 4 times (to print 4 stars side-by-side). Don't forget to print a newline `\n` after the inner loop finishes a row!

#include <stdio.h>

int main()
{
    int row = 1;
    int col  ;
    do
    {
        col = 1;
        do
        {
            
            printf("* ");
            col++;
        } while (col <= 4);
        printf("\n");
        row++;

        /* code */
    } while (row <= 4);

    return 0;
}

