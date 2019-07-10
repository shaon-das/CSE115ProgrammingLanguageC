//This program takes 2 digits and stores them in two location, then interchanges the location of the numbers.

#include<stdio.h>
#include<conio.h>
int main ()
{
    int C,D,E;

    printf("Enter the number to store in location C: ");
    scanf("%d",&C);
    printf("Now enter the number to store in location D: ");
    scanf("%d",&D);

    E = C;
    C = D;
    D = E;

    printf("After Interchanging: ");
    printf("The number of location C is: %d\n",C);
    printf("and the number of location D is: %d ",D);

    return 0;
}
