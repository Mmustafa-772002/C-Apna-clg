#include <stdio.h>
#include <string.h>
int main()
{
    char name[20], noun[20], verb[20], adjective[20], adverb[20];
    printf("Enter a name: ");
    scanf("%s", name);
    printf("Enter a noun: ");
    scanf("%s", noun);
    printf("Enter a verb: ");
    scanf("%s", verb);
    printf("Enter an adjective: ");
    scanf("%s", adjective);
    printf("Enter an adverb: ");
    scanf("%s", adverb);
    printf("Here is your mad lib story:\n");
    printf("%s is a %s %s who loves to %s %s.\n", name, adjective, noun, verb, adverb);

    return 0;
}