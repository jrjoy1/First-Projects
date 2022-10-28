#include<stdio.h>
int main ()
{
    float base,height,area;

    printf("Enter The Base : ");
    scanf("%f",&base);

    printf("Enter The Height : ");
    scanf("%f",&height);

    area = 0.5 * base * height;

    printf("Area Of Triangle = %.2f \n ",area);

    getch();
}
