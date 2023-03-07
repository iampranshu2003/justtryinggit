// 3. Write a C program to check whether a number is even or odd using
// conditional/ternary operator.
#include <stdio.h>
int main()
{
    int a;
    printf("enter the number ");
    scanf("%d",&a);
    a%2==0?printf("%d is an even number",a):printf("%d is an odd number",a);
    return 0;
}