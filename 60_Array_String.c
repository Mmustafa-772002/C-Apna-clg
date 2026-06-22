#include <stdio.h>
int main()
{

    char fruits[][10] = {"apple", "banana", "orange"};
    fruits[0][0]= 'e';
    fruits[0][1]= 'g';
    fruits[0][2]= 'l';
    fruits[0][3]= 'o';
    fruits[0][4]= 'o';
    int size = sizeof(fruits)/sizeof(fruits[0]);
    for (int i = 0; i < size; i++)
    {
        printf("%s ", fruits[i]);
    }

    return 0;
}