// Problem 3: The Menu Chooser (Practical Application)
// Goal: In real software, do-while loops are heavily used for menus. Create a simple text menu that displays 3 options. The loop should keep re displaying the menu until the user selects the "Exit" option (Option 3).

#include <stdio.h>
int main()
{
    int option, Balance = 1000, deposit, Withdrawal;

    do
    {
        printf("\nplease select the option from this menu ");
        printf("\n--- ATM MENU ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdrawal amount \n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("-----Check Balance-----\n");
            printf("\nYour current balance is : %d\n", Balance);
            break;
        case 2:
            printf("-----Deposit Money-----\n");
            printf("Please enter amount to deposit : \n");
            scanf("%d", &deposit);
            Balance = Balance + deposit;
            printf("\nYour current balance is : %d\n", Balance);

            break;
        case 3:
            printf("-----Withdrawal amount-----\n");
            printf("Please enter amount to Withdrawal : \n");
            scanf("%d", &Withdrawal);
            if (Balance<Withdrawal)
            {
                printf("\n insufficient Balance ! \n ");
            }
            else {
            Balance = Balance - Withdrawal;
            printf("\nYour current balance is : %d\n", Balance);
            }
            break;

        default:
            break;
        }

    } while (option != 4);

    printf("\n------------Exit------------");
    return 0;
}