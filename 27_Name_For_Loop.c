#include <stdio.h>
#include <string.h>
int main()
{
    int rows, column;
    char symbol[100];
    printf("\nplease enter number of rows to print : ");
    scanf("%d", &rows);
    printf("\nplease enter number of column to print : ");
    scanf("%d", &column);
    while ((getchar()) != '\n' && getchar() != EOF)
        ;

    printf("\nPlease enter the Symbol to print : ");
    // Using sizeof(symbol) is safer than sizeof(symbol) - 1
    fgets(symbol, sizeof(symbol), stdin);

    // Remove the trailing newline that fgets naturally captures
    symbol[strcspn(symbol, "\n")] = '\0';

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%3d. %s", i, symbol);
        }
        printf("\n");
    }
    return 0;
}