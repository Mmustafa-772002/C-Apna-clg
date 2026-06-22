#include<stdio.h>
#include<math.h>
int main()
{
    double radius ;
    double area ;
    double surface_area;
    double volume ;
    const double pi =  3.14159 ;
    printf("Enter The radius of the circle : ");
    scanf("%lf",&radius);
    area = pi * pow(radius,2);
    printf("The area of the circle is : %.2lf \n ",area);
    surface_area = 4 * pi * pow(radius,2);
    printf("The surface area of the circle is : %.2lf \n ",surface_area);
    volume = (4.0 / 3.0 ) * pi * pow(radius,3);
    printf("The volume of the circle is : %.2lf \n ",volume);

}