/*6. Write a C program to find roots of a quadratic equation using switch case.*/
# include <stdio.h>
# include <math.h>
int main ()
{
    int x;
    float a,b,c,t,z,y;
    printf("enter the coefficient in order coefficient of x^2,x,constant");
    scanf("%f%f%f",&a,&b,&c);
    x=((b*b)-(4*a*c))>=0;
    switch(x)
    {
    case 0: printf("roots are Imaginary");
    break;
    case 1: y=(b*b)-(4*a*c);
    z=(-b+sqrt(y))/(2*a);
    t=(-b-sqrt(y))/(2*a);
    printf("square roots are %f",z);
    printf(" %f",t);
    break;
    }
    return 0;
    
}