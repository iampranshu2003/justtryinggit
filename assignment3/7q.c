//7. Write a C program to create Simple Calculator using switch case.


#include <stdio.h>
#include <math.h>

int main()
{
  int a,b,c,d;
  printf("enter the variables    ");
  scanf("%d %d",&b,&c);

  printf("enter 1 for +\n");
  printf("enter 2 for -\n");
  printf("enter 3 for *\n");
  printf("enter 4 for /\n");
  printf("enter 5 for √\n");
  printf("enter the operation to be executed");
  scanf("%d",&a);
  switch(a)
  {
  case 1: d = b+c;
  break;
  case 2: d = b-c;
  break;
  case 3: d = b*c;
  break;
  case 4: d = b/c;
  break;
  case 5: d = sqrt(b);
  break;
  default : printf("you have lost your mind");
  }
  printf("%d",d);
    return 0;
}

