#include<stdio.h>
int agecheck(int age){
    if (age>=18)
    {
        printf("You are adult");
    }
    else
    {
        printf("You are minor");
    }
    return age;
    
}

int main ()
{
    int age;
    printf("please enter your age : ");
    scanf("%d",&age);
    agecheck(age);
}