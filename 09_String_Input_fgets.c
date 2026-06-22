#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    printf("Enter the name : ");
    fgets(name,sizeof(name)-1,stdin);
    name[strlen(name)-1]='\0';
    printf("\nYour name is : %s",name);
    
}