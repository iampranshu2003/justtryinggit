/*4. Write a C program to find maximum between two numbers using switch
*/

#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    printf("enter numbers\n");
    scanf("%d%d",&a,&b);
    
    switch(a>=b)
    {
        case 1:
        switch(a==b)
        {
            case 1: printf("both are equal");
            break;
            case 0: printf("first number is greatest");
            break;
        }
        break;
        case 0:printf("second is greatest");
        break;
        default:printf("\ninvalid input");
    }
    return 0;
    }
    
