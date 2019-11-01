#include <stdio.h>
#include <stdlib.h>

int power(int a,int b);

int main()
{
    int x,y,z;
    printf("Enter the first number:");
    scanf("%d",&x);

    printf("Enter the second number:");
    scanf("%d",&y);

    z=power(x,y);

    printf("Power of two number is %d",z);

    return 0;
}
int power(int a,int b)
{
    int i,power=1;

    for(i=1;i<=a; i++)
    {
        power=power*b;
    }
    return power;
}
