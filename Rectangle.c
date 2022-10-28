#include<stdio.h>
int main()
{
    float length,width,area;
    printf("Enter Length : ");
    scanf("%f",&length);

    printf("Enter width : ");
    scanf("%f",&width);

    area= length*width;
    printf("Area Of Rectangle : %.2f\n",area);

    getch();
}
