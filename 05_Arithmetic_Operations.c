#include <stdio.h>
int main()
{
    // in this program we learning the multiple types of the arithmetic operation
    // such as +,-,*,/,% ,++,--
    int x = 40;
    int y = 30;
    int sum = x + y;
    int sub = x - y;
    int mul = x * y;
    int div = x / y;
    int mod = x % y;

    printf("The sum operation of the %d and %d is : %d \n \n  ", x, y, sum);
    printf("The  subtraction operation of the %d and %d is : %d \n \n  ", x, y, sub);
    printf("The multiplication operation of the %d and %d is : %d \n \n  ", x, y, mul);
    printf("The division operation of the %d and %d is : %d \n \n  ", x, y, div);
    printf("The module operation of the %d and %d is : %d \n \n  ", x, y, mod);
    // --- Post-Increment / Decrement Demonstration ---
    // Instead of printing x and y (which makes it look like 21 + 30 = 20),
    // let's show exactly how postfix increment works.
    int original_x = x;
    int incre = x++; // 'incre' gets 20, 'x' becomes 21
    printf("Postfix Increment (x++):\n");
    printf("  Value assigned to 'incre': %d\n", incre);
    printf("  New value of 'x' after operation: %d\n\n", x);

    int decre = x--; // 'decre' gets 21, 'x' becomes 20 again
    printf("Postfix Decrement (x--):\n");
    printf("  Value assigned to 'decre': %d\n", decre);
    printf("  New value of 'x' after operation: %d\n\n", x);
    return 0;
}

/* there are also some of the augmented assignment operators in arithmetic operations 
x+=3;
x-=3;
x*=3;
x/=2;

to clear entire part of the files destination goto settings and type code runner in in execute map section click on the edit json file goto c file and add clear && and rest keep as same 

*/

