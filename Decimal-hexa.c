#include<stdio.h>
int main()
{
    int num1,num2,num3,num4;
    printf("Enter A Decimal Number = ");
    scanf("%d",&num1);
    printf("The Octal Number Is = %o\n",num1);

    printf("Enter A Octal Number = ");
    scanf("%o",&num2);
    printf("The Decimal Number Is = %d \n",num2);

    printf("Enter A Hexa-decimal Number = ");
    scanf("%x",&num3);
    printf("The Octal Number Is = %o \n",num3);

    printf("Enter A Decimal Number = ");
    scanf("%d",&num4);
    printf("The Hexa-Decimal Number Is = %x",num4);

    getch();
}
