#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,reverse=0,remainder;

    printf("Enter the number:\n");
    scanf("%d",&n);

    while(n!=0)
    {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }
    printf("Reversed number is %d",reverse);

    return 0;
}
