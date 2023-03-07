/* Write a C program to check whether a number is even or odd using switch
case.
*/
# include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number");
    scanf("%d",&a);
    b=a%2;
    switch(b)
    {
        case 1: printf("number is odd");
        break;
        case 0: printf("number is even");
        break;
    }
    return 0;
}