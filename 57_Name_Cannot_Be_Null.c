#include <stdio.h>
#include <string.h>
int main()
{
    char name[50]="";
    printf("please enter your name : ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    while (strlen(name) == 0)
    {
        printf("The name cannot be empty ");
        printf("\nplease enter your name : ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
        }
    printf("Hello %s", name);
    return 0;
}