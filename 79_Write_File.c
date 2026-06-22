#include<stdio.h>
int main()
{

    FILE *pFile =fopen("E:\\Output.txt","w");  // this is for the path in the file exp
char text[]="Hello this write in file program";

    if(pFile==NULL){
        printf("error opening a file ");
        return 1; 
    }
    fprintf(pFile,"%s",text);
    printf("the file written successfully");
    fclose(pFile);
    return  0;

}