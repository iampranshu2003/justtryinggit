// 1. Write a C program to find maximum between two numbers using
// conditional/ternary operator.

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the two numbers ");
    scanf("%d%d",&a,&b);
    c=a>b?a:b;
    printf("greater is %d",c);
    return 0;
}