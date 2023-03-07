// 5. Write a C program to check whether character is an alphabet or not using
// conditional/ternary operator.
#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character ");
    scanf("%c",&ch);
    ch=='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U'?printf("%C is a VOWEL",ch):printf("%C is not a VOWEL",ch);
    return 0;
}