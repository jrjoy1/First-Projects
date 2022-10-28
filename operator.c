#include<stdio.h>
int main()
{
    int num1,num2,sum;
    float avg;

    printf("Enter Two Numbers : ");
    scanf("%d %d",&num1,&num2);
    sum = num1+num2;
    printf("The Number Is : %d \n",sum);

    avg=(float)sum/2;
    printf("The Avarage Is : %.2f",avg);
    getch();

}
