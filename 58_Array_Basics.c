// array : array is fixed size of the element in the data type
// similar to a variable but it holds more than 1 value
// array is collection of the similar data type
#include <stdio.h>
int main()
{
    int number[] = {10, 20, 30, 40};
    // 0 , 1 , 2 , 3 this is index of the array
    // same for other data type as well
    char grade[] = {'A', 'B', 'C', 'D', 'E'};
    // 0 , 1 , 2 , 3 , 4 this is index of the array
    // same for other data type as well
    // se dont use the print single data stmt for print an array
    char name[] = "Hey bro";
    // 0,1,2,3,4,so on this is index of the array
    //  same for other data type as well
    char *fruits[] = {"Apple", "Banana", "Grapes", "Orange"};

    printf("\n----------------------------------------------------");
    printf("\n----------------------------------------------------");

    printf("\nThe number at the array : %d", number[0]);
    printf("\nThe number at the array : %d", number[1]);
    printf("\nThe number at the array : %d", number[2]);
    printf("\nThe number at the array : %d", number[3]);

    printf("\n----------------------------------------------------");
    printf("\n----------------------------------------------------");

    printf("\nThe number at the garde : %c", grade[0]);
    printf("\nThe number at the garde : %c", grade[1]);
    printf("\nThe number at the garde : %c", grade[2]);
    printf("\nThe number at the garde : %c", grade[3]);
    printf("\nThe number at the garde : %c", grade[4]);

    printf("\n----------------------------------------------------");
    printf("\n----------------------------------------------------");

    printf("\nThe number at the name letter : %c", name[0]);
    printf("\nThe number at the name letter : %c", name[1]);
    printf("\nThe number at the name letter : %c", name[2]);
    printf("\nThe number at the name letter : %c", name[3]);
    printf("\nThe number at the name letter : %c", name[4]);
    printf("\nThe number at the name letter : %c", name[5]);
    printf("\nThe number at the name letter : %c", name[6]);

    printf("\n----------------------------------------------------");
    printf("\n----------------------------------------------------");

    printf("\nThe number at the name of the fruits is : %s", fruits[0]);
    printf("\nThe number at the name of the fruits is : %s", fruits[1]);
    printf("\nThe number at the name of the fruits is : %s", fruits[2]);
    printf("\nThe number at the name of the fruits is : %s", fruits[3]);

    // this will print the array number which is at the 3rd number wrt to index number

    // to change the value in the array you have to use the index which one have to change and the array data
    number[3] = 100;
    printf("\n%d", number[3]);
    // if you want display the all elements of array we have to use loops

    printf("\n----------------------------------------------------");
    printf("\n----------------------------------------------------");

    for (int i = 0; i < 4; i++)
    {
        printf("\nThe number array is : %d", number[i]);
    }

    printf("\n----------------------------------------------------");
    printf("\n----------------------------------------------------");

    for (int j = 0; j < 5; j++)
    {
        printf("\nThe grade array is : %c", grade[j]);
    }

    printf("\n----------------------------------------------------");
    printf("\n----------------------------------------------------");

    for (int k = 0; k < 7; k++)
    {
        printf("\nThe name array is : %c", name[k]);
    }

    printf("\n----------------------------------------------------");
    printf("\n----------------------------------------------------");

    for (int f = 0; f < 4; f++)
    {
        printf("\nThe fruit array is  : %s", fruits[f]);
    }
    printf("\n");

    // to check the size of array

    printf("\n----------------------------------------------------");
    printf("\n----------------------------------------------------");

    printf("\n The size of an number array is : %d", sizeof(number));
    printf("\n The size of an number array is : %d", sizeof(number[0]));
    printf("\n The size of an number array is : %d", sizeof(number[1]));
    printf("\n The size of an number array is : %d", sizeof(number[2]));
    printf("\n The size of an number array is : %d", sizeof(number[3]));

    printf("\n----------------------------------------------------");
    printf("\n----------------------------------------------------");

    printf("\n The size of an grade array is : %d", sizeof(grade));
    printf("\n The size of an grade array is : %d", sizeof(grade[0]));
    printf("\n The size of an grade array is : %d", sizeof(grade[1]));
    printf("\n The size of an grade array is : %d", sizeof(grade[2]));
    printf("\n The size of an grade array is : %d", sizeof(grade[3]));

    printf("\n----------------------------------------------------");
    printf("\n----------------------------------------------------");

    printf("\n The size of an name array is : %d", sizeof(name));
    printf("\n The size of an name array is : %d", sizeof(name[0]));
    printf("\n The size of an name array is : %d", sizeof(name[1]));
    printf("\n The size of an name array is : %d", sizeof(name[2]));
    printf("\n The size of an name array is : %d", sizeof(name[3]));

    printf("\n----------------------------------------------------");
    printf("\n----------------------------------------------------");

    printf("\n The size of an fruits array is : %d", sizeof(fruits));
    printf("\n The size of an fruits array is : %d", sizeof(fruits[0]));
    printf("\n The size of an fruits array is : %d", sizeof(fruits[1]));
    printf("\n The size of an fruits array is : %d", sizeof(fruits[2]));
    printf("\n The size of an fruits array is : %d", sizeof(fruits[3]));

    // if you want display the all elements of array we have to use loops

    printf("\n----------------------------------------------------");
    printf("\n----------------------------------------------------");

    for (int g = 0; g < 4; g++)
    {
        // If you want to see how many bytes they use in memory, use %zu (the correct format specifier for sizes):
        printf("\nThe number array is : %zu ", sizeof(number[g]));
        printf("\nThe number array is : %d ", sizeof(number[g]));
    }

    printf("\n----------------------------------------------------");
    printf("\n----------------------------------------------------");

    for (int h = 0; h < 5; h++)
    {
        printf("\nThe grade array is : %zu ", sizeof(grade[h]));
        printf("\nThe grade array is : %d ", sizeof(grade[h]));
    }

    printf("\n----------------------------------------------------");
    printf("\n----------------------------------------------------");

    for (int a = 0; a < 7; a++)
    {
        printf("\nThe name array is : %zu ", sizeof(name[a]));
        printf("\nThe name array is : %d ", sizeof(name[a]));
    }

    printf("\n----------------------------------------------------");
    printf("\n----------------------------------------------------");

    for (int b = 0; b < 4; b++)
    {
        printf("\nThe fruit array is  : %zu ", sizeof(fruits[b]));
        printf("\nThe fruit array is  : %d ", sizeof(fruits[b]));
    }

    printf("\n----------------------------------------------------");
    printf("\n----------------------------------------------------");

    // claculate the number  of element in array without refering a number in for loop
    int size = sizeof(number) / sizeof(number[0]);
    for (int m = 0; m < size; m++)
    {
        printf("\n%d ", number[m]);
    }

    printf("\n----------------------------------------------------");
    printf("\n----------------------------------------------------");

    size = sizeof(grade) / sizeof(grade[0]);
    for (int m = 0; m < size; m++)
    {
        printf("\n%c ", grade[m]);
    }

    printf("\n----------------------------------------------------");
    printf("\n----------------------------------------------------");

    size = sizeof(name) / sizeof(name[0]);
    for (int m = 0; m < size; m++)
    {
        printf("\n%c ", name[m]);
    }

    printf("\n----------------------------------------------------");
    printf("\n----------------------------------------------------");

    size = sizeof(fruits) / sizeof(fruits[0]);
    for (int m = 0; m < size; m++)
    {
        printf("\n%s ", fruits[m]);
    }

    return 0;
}
