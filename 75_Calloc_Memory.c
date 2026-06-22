#include <stdio.h>
#include <stdlib.h>
int main()
{
    // calloc : contiguous allocation
    /*allocates memory and initializes all bytes to zero
    malloc is faster but calloc leads to less bugs */
    // syntax : void *calloc(size_t num, size_t size);
    int number = 0;
    printf("Enter the number : ");
    scanf("%d", &number);

    int *scores = calloc(number , sizeof(int));
    if (scores == NULL)
    {
        printf("Memory allocation fail ");
        return 1;
    }
    for (int i = 0; i < number; i++)
    {
        printf("Enter the score: %d ",i+1);
        scanf("%d",&scores[i]);

    }
    
    for (int i = 0; i < number; i++)
    {
        printf("%d ", scores[i]);
    }

    free(scores);
    scores = NULL;
}