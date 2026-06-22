// shopping cart program
/* input
1.item
2.prize
3.quantity
while use added the prize and quantity it should get multiply with the number and should display the total bill


*/

#include <stdio.h>
int main()
{
    char item_name[100];
    char currency ='$';
    float prize;
    int quantity;
    float total;
    printf(" Enter the name of the item : ");
    scanf("%s", item_name);
    printf(" Enter the prize of the item : ");
    scanf("%f", &prize);
    printf(" Enter the quantity of the item : ");
    scanf("%d", &quantity);
    printf("-----------invoice------------\n");
    printf("The name of the item is : %s  \n", item_name);
    printf("The prize of the item is : %c %.2f\n",currency,prize);
    printf("The quantity of the item is : %d  \n", quantity);
    total = prize * quantity ; 
    printf("The total cost of the item is :%c %.2f   \n",currency, total);
    return 0;
}