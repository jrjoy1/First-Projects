#include<stdio.h>
int main()
{
    char lower,upper;
    printf("Enter Any Uppercase Letter:");
    scanf("%c",&upper);
    lower= tolower(upper);
    printf("The lowercase Letter Is: %c",lower);

}
