#include <stdio.h>
void birthday(int* age);
int main()
{
    /* pointer : a variable that stores the memory address of another variable .
    benefits :that helps to avoid the wasting of memory by allowing to pass the
    address of a large data structure instead of copying the entire data.

    */
    int age = 25;
    int *pAge = &age;
    birthday(pAge);
    // printf("%p",&age); // this will print the hexadecimal value of variable

    printf("%p\n", &age);
    printf("%p\n", pAge);

    printf("You are %d years old ", age);
    return 0 ;
}
void birthday(int* age)
{

    //pass by reference 

    // age++; by this you cannot increament the value you should have to 
    //derefrence the value 
    (*age)++;
}