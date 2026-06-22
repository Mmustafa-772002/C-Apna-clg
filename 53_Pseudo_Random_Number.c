#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // pseudo random number : appear random but are determined by a mathematical formula that used the seed value to generate a predictable sequence number .
    // advance : mersenne twister or dev/random
    srand(time(NULL));
    // printf("%d",rand());
    int min = 1;
    int max = 100;
    int random_num1 = (rand() % max - min + 1) + min;
    int random_num2 = (rand() % max - min + 1) + min;
    int random_num3 = (rand() % max - min + 1) + min;
    printf("%d %d %d", random_num1, random_num2, random_num3);
    return 0;
}