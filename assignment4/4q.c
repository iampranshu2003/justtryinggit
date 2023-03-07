// 4. Write a C program to check whether year is leap year or not using
// conditional/ternary operator.
#include <stdio.h>
int main()
{
    int a;
    printf("enter the year ");
    scanf("%d",&a);
    a%4==0?printf("%d is a leap year",a):printf("%d is not a leap year",a);
    return 0;
}