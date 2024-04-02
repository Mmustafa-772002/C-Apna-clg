#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    int mod = a % b;
    int inc = a++;
    int dec = b--;
    int equal = (a == 30);
    int compound = a += 10;
    printf(" the sum of the a and b is %d \n", sum);
    printf(" the sub of the a and b is %d \n", sub);
    printf(" the mul of the a and b is %d \n", mul);
    printf(" the div of the a and b is %d \n", div);
    printf(" the mod of the a and b is %d \n", mod);
    printf(" the inc of the a and b is %d \n", inc);
    printf(" the dec of the a and b is %d \n", dec);
    printf(" the equal of the a and b is %d \n", equal);
    printf(" the compound of the a and b is %d \n", compound);
}
