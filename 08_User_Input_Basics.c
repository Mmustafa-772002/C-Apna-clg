#include <stdio.h>
#include <string.h>
// this helps to the user to get the more useful function for the strings

int main()
{
    int age;
    float gpa;
    char grade;
    char name[100];
    char fname[100];
    printf("\n Enter your age :");
    scanf("%d", &age);
    printf("\n Enter your GPA :");
    scanf("%f", &gpa);
    printf("\n Enter your grades : ");
    scanf(" %c", &grade);
    // always remember that while taking any value you should keep one space before assigning the character because it's start from \n position
    printf("\n Enter your name :");
    scanf("%s", name);
    // while assigning the sting don't use the % to assign the string variable name keep as it is
    getchar();
    printf("\n Enter your full name : ");
    fgets(fname, sizeof(fname), stdin);
    fname[strlen(fname) - 1] = "\0";
    // to get the full name in the string we have use diffreenet function that is fget function

    printf("your age is %d \n ", age);
    printf("your GPA is %.2f \n ", gpa);
    printf("your grade is %c \n ", grade);
    printf("your name is %s \n ", name);
    printf("your Full name is %s \n ", fname);
}