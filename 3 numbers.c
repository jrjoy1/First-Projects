#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;
    float avg;

    printf("Enter Three Numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);
    sum = num1 + num2 + num3;
    avg = sum/3;
    printf("The Sum Is : %d \n",sum);
    printf("Avarage = %.2f",avg);
    return 0;
}
