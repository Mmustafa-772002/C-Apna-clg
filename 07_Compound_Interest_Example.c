#include <stdio.h>
#include<math.h>
int main()
{
    double principle = 0.0, rate = 0.0, total = 0.0;
    int timesCompounded = 0, year = 0;
    printf("The compound interest calculator : ");
    printf("\nEnter the principle : ");
    scanf("%lf", &principle);
    printf("\nEnter the rate : ");
    scanf("%lf", &rate);
    rate = rate / 100;
    printf("\nEnter the number year : ");
    scanf("%d", &year);
    printf("\nEnter the of number of times of the years compounded : ");
    scanf("%d", &timesCompounded);
    total = principle*pow(1+rate/timesCompounded,timesCompounded* year);
    printf(" The compound interest is : %.2lf ", total);
}