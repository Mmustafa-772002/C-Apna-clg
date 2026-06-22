#include<stdio.h>
#include<stdbool.h>
bool agecheck(int age){
    if (age>=18)
    {
        return true;
    }
    else
    {
        return false;
    }
    return age;
    
}

int main ()
{
    int age;
    printf("please enter your age : ");
    scanf("%d",&age);
    if (agecheck(age))
    {
        printf("You are adult");
    }
    else
    {
        printf("You are minor");
    }
}