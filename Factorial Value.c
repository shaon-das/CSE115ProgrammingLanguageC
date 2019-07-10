#include<stdio.h>

int main()
{
  int x,y=1,num;

  printf("Enter a number: ");
  scanf("%d",&num);

  for(x=1; x<=num; x++)
      y=y*x;

  printf("Factorial value is: %d",y);
  return 0;
}
