/*3. Write a C program print total number of days in a month using switch
*/

#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    printf("enter month number\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:printf("30");
        break;
        case 2:printf("28");
        break;
        case 3:printf("30");
        break;
        case 4:printf("31");
        break;
        case 5:printf("30");
        break;
        case 6:printf("31");
        break;
        case 7:printf("30");
        break;
        case 8:printf("31");
        break;
        case 9:printf("30");
        break;
        case 10:printf("31");
        break;
        case 11:printf("30");
        break;
        case 12:printf("31");
        break;
        default:printf("\ninvalid input");
    }
    return 0;
    }
    
