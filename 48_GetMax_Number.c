#include<stdio.h>
int getmax(int number1,int number2){
    if (number1<number2)
    {
        printf("The %d number is greater than %d ",number2,number1);
    }
    else  if (number1>number2)
    {
        printf("The %d number is greater than %d ",number1,number2);
    }
    else
    {
        printf("The %d number is are equal to %d ",number1,number2);
    }
    return number1 , number2;
    

}
int main ()
{
    int number1, number2;
    printf("please enter the number 1 : ");
    scanf("%d",&number1);
    printf("please enter the number 2 : ");
    scanf("%d",&number2);
    printf(getmax(number1, number2));
    return 0;
}