#include<stdio.h>
typedef int numbers;
typedef char* string;
int main()
{
    //typedef = reserved keyword that gives an existing data type a "nickname"
    //Helps to simplify complex type of the data that improves readability

    //typedef existing_data_type new_name;
    numbers x = 3;
    numbers y = 8;
    numbers z = 9;
    printf("The sum of the number is %d",x+y+z);
    string name = "john";
    printf("\n%s",name);
    return 0 ;
}