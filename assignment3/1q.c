/*1. Write a C program to check whether an alphabet is vowel or consonant
using switch case.*/
#include <stdio.h>
#include <math.h>
int main()
{
    char a,i,e,o,u,ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':
        case'A':
        case'E':
        case'I':
        case'O':
        case'U':printf("vowel");
        break;
        default:printf("\nconsonent");
    }
    return 0;
    }
    
