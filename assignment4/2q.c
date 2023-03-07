// 2. Write a C program to find maximum between three numbers using
// conditional/ternary operator
#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter the two numbers ");
    scanf("%d%d%d",&a,&b,&c);
    d=a>b?a:b;
    c>d?printf("%d is greatest",c):printf("%d is greatest",d);
    return 0;
}