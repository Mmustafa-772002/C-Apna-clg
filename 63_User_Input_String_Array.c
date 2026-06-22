#include <stdio.h>
#include <string.h>
int main()
{
    char name[3][1000] = {0};
    for (int i = 0; i < 3; i++)
    {

        printf("\n\nEnter the name : ");
        fgets(name[i], sizeof(name[i]), stdin);
        name[i][(strlen(name) - i)] = '\0';
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n%s", name[i]);
    }

    printf("\n");
    return 0;
}