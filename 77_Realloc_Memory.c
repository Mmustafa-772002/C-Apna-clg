#include <stdio.h>
#include <stdlib.h>
int main()
{
    // realloc : reallocation
    /* this function is used to change the size of the memory block allocated by malloc or calloc
    realloc(ptr,bytes) */
    int number = 0;
    printf("Please enter the number of prizes : ");
    scanf("%d", &number);

    float *prizes = malloc(number * sizeof(float));
    if (prizes == NULL)
    {
        printf("memory allocation fail");
        return 1;
    }
    for (int i = 0; i < number; i++)
    {
        printf("Enter the prize : #%d : ", i + 1);
        scanf("%f", &prizes[i]);
    }
    int newnumber;
    printf("please enter the new number prizes : ");
    scanf("%d", &newnumber);
    float *temp = realloc(prizes, newnumber * sizeof(float));
    if (temp == NULL)
    {
        printf("could not reallocate memory");
    }
    else
    {
        prizes = temp;
        for (int i = number; i < newnumber; i++)
        {
            printf("Enter the prize : #%d : ", i + 1);
            scanf("%f", &prizes[i]);
        }
        for (int i = 0; i < newnumber; i++)
        {
            printf("\nThe number is $%.2f", prizes[i]);
        }
    }

    free(prizes);
    prizes = NULL;
    return 0;
}