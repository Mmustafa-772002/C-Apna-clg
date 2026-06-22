#include <stdio.h>
int main()
{
    // int number[]= {1 ,2,3,4,} ;  this is one dimensional array
    int numbers[][3] = {{1, 2, 3},
                        {5, 6, 7},
                        {8, 9, 10},
                        {11, 12, 13}};
    // printf("\n %d", numbers[0][0]);
    // printf("\n %d", numbers[0][1]);
    // printf("\n %d", numbers[0][2]);
    // printf("\n %d", numbers[1][0]);
    // printf("\n %d", numbers[1][1]);
    // printf("\n %d", numbers[1][2]);
    // printf("\n %d", numbers[2][0]);
    // printf("\n %d", numbers[2][1]);
    // printf("\n %d", numbers[2][2]);
    // printf("\n %d", numbers[3][0]);
    // printf("\n %d", numbers[3][1]);
    // printf("\n %d", numbers[3][2]);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", numbers[i][j]);
        }
    }
    return 0;
    // multidimensional array or 2d array :  an array where each element is an array
    // array [][] ={{ },{ },{ }};
}