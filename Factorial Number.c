#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int main()
{
    int number,x;
    printf("Enter a number:");
    scanf("%d",&number);

    x=factorial(number);

    printf("Factorial of %d=%d",number,x);
    return 0;
}
int factorial(int n)
{
    int i,fact=1;

    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
