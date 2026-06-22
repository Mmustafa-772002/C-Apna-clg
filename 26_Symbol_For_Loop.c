#include<stdio.h>
int main()
{
    int rows , column ;
    char symbol ;
    printf("\nplease enter number of rows to print : ");
    scanf("%d",&rows);
    printf("\nplease enter number of column to print : ");
    scanf("%d",&column);
    printf("\nplease enter number of Symbol to print : ");
    scanf(" %c",&symbol);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < column; j++)
        {   
            printf("%3d. %c",i,symbol);
        }
        printf("\n");
        
    }
    return 0 ;

}