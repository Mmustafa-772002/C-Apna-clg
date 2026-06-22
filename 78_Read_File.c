#include <stdio.h>
int main()
{
    FILE *pFile = fopen("Output.txt", "r");
    if (pFile == NULL)
    {
        printf("could not open the file");
        return 1;
    }
    char buffer[1024] = {0};
    while (fgets(buffer, sizeof(buffer), pFile) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(pFile);
    return 0;
}