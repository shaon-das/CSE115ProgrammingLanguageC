#include <stdio.h>
#include <stdlib.h>

int add(int a,int b,int c,int d,int e);
float avg(int a,int b,int c,int d,int e);

int main()
{
    int m,n,o,p,q,sum=0;
    float average;

    printf("Enter the five number:\n");
    scanf("%d %d %d %d %d",&m,&n,&o,&p,&q);

    sum=add(m,n,o,p,q);
    average=avg(m,n,o,p,q);

    printf("Sum of five number is %d",sum);
    printf("\nAverage of five number is %f",average);

    return 0;
}
int add(int a,int b,int c,int d,int e)
{
    int x;

    x=a+b+c+d+e;

    return x;
}
float avg(int a,int b,int c,int d,int e)
{
    float y;
    y=((a+b+c+d+e)/5);

    return y;
}
