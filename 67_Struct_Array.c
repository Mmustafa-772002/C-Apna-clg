#include <stdio.h>
typedef struct
{
    char model[50];
    int year;
    int prize;

} car;

int main()
{
    car cars[] = {{"Mustang", 2025, 32000},
                  {"ferrari", 2025, 45000},
                  {"BMW", 2024, 60000}};
    // array of struct : array where each element contains a struct {}
    // helps to organize the groups together related data
    car car1 = {"Mustang", 2025, 32000};
    car car2 = {"ferrari", 2025, 45000};
    car car3 = {"BMW", 2024, 60000};
    int number = sizeof(cars) / sizeof(cars[0]);
    for (int i = 0; i < number; i++)
    {
        printf("\n %s %d $%d", cars[i].model, cars[i].year, cars[i].prize);
    }

    printf("\n %s %d $%d", car1.model, car1.year, car1.prize);
    printf("\n %s %d $%d", car2.model, car2.year, car2.prize);
    printf("\n %s %d $%d", car3.model, car3.year, car3.prize);

    return 0;
}