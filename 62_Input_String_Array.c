#include <stdio.h> /*--- please take a look still not solved --*/
#include <strings.h>
int main()
{

    char name[30] = {};
    for (int i = 0; i < 5; i++)
    {
        printf("Please enter the name : ");
        fgets(name, sizeof(name) , stdin);
        name[strlen(name)] = '\0';

        for (int j = 0; j < 6; j++)
        {
            printf("%s", name[j]);
        }
    }
}