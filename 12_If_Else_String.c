#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    printf("Enter your Name : ");
    fgets(name, sizeof(name), stdin);

    // from now onwards use to get the string as fgets function to write the string the syntax is fgets(string name, size of the string, stdin) and it also add the new line character at the end of the string so we have to remove that new line character from the string and for that we can use the strlen function to get the length of the string and then we can replace the new line character with null character '\0' to remove it from the string

    // for normal to get the string the syntax is scanf("%s", name) but this will not work if the user enters the name with space in it so we have to use the fgets function to get the string with space in it and then we can remove the new line character from the string and then we can check if the length of the string is zero or not to check if the user entered the name or not syntax for gets is gets(name) but this is not recommended to use because it can cause buffer overflow and it does not add the new line character at the end of the string so we have to use the fgets function to get the string and then we can remove the new line character from the string and then we can check if the length of the string is zero or not to check if the user entered the name or not 
    name[strlen(name)-1]='\0';
    // this is the way to remove the new line character from the string and then we can use the strlen function to get the length of the string and then we can check if the length of the string is zero or not if it is zero then we can say that the user did not enter the name otherwise we can print the name of the user
    if (strlen(name) == 0)
    {
        printf("You did not entred the name ");
    }
    else
    {
        printf("Your name is %s", name);
    }
    return 0;
}