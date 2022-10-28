#include<stdio.h>
#include<math.h>
int main()
{
    float radius,area;

    printf("Enter Radius : ");
    scanf("%f",&radius);

    area=M_PI*radius*radius;
    printf("The Area of The Sircle : %.2f\n",area);

    getch();
}
