/*3. Write a C program print total number of days in a month using switch*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("enter week number\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:printf("sunday");
        break;
        case 2:printf("monday");
        break;
        case 3:printf("tuesday");
        break;
        case 4:printf("wednesday");
        break;
        case 5:printf("thursday");
        break;
        case 6:printf("friday");
        break;
        case 7:printf("saturday");
        break;
        default:printf("\ninvalid input");
    }
    return 0;
    }
    
